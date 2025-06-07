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
    <title>LMS - Member</title>
    <link rel="stylesheet" href="styles.css">
</head>

<body>
    <header>
        <h1>Library Management System</h1>
        <nav>
            <a href="index.html">Home</a>
            <a href="book.html">Book</a>
            <a href="member.html">Member</a>
            <a href="circulation.html">Circulation</a>
            <a href="report.html">Report</a>
            <a href="settings.html">Settings</a>
            <a href="help.html">Help</a>
            <a href="logout.html">Logout</a>
        </nav>
    </header>
    <main>
        <h2>Member Section</h2>
        <p>Here you can manage all the members in the library.</p>
    </main>
    <footer>
        <p>&copy; 2023 Library Management System. All rights reserved.</p>
    </footer>
</body>

</html>