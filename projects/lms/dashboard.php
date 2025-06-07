<?php
session_start();
if (!isset($_SESSION['email'])) {
    header('Location: index.php');
    exit();
}
?>
<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>LMS - Dashboard</title>
    <link rel="stylesheet" href="styles.css">
</head>

<body>
    <header>
        <h1>Library Management System</h1>
        <nav>
            <a href="#">Dashboard</a>
            <a href="book.php">Book</a>
            <a href="member.php">Member</a>
            <a href="circulation.php">Circulation</a>
            <a href="report.php">Report</a>
            <a href="settings.php">Settings</a>
            <a href="help.php">Help</a>
            <a href="logout.php">Logout</a>
            <span>Welcome, <?php echo htmlspecialchars($_SESSION['email']); ?>!</span>
        </nav>
    </header>
    <main>
        <h2>Dashboard</h2>
        <p>This is the control panel of your application.</p>
    </main>
    <footer>
        <p>&copy; 2023 Library Management System. All rights reserved.</p>
    </footer>
</body>

</html>