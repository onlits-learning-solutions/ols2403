<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>LMS - New Book</title>
    <link rel="stylesheet" href="styles.css">
</head>
<body>
    <header>
        <h1>Library Management System</h1>
        <nav>
            <a href="index.html">Home</a>
            <a href="book.php">Book</a>
            <a href="member.html">Member</a>
            <a href="circulation.html">Circulation</a>
            <a href="report.html">Report</a>
            <a href="settings.html">Settings</a>
            <a href="help.html">Help</a>
            <a href="logout.html">Logout</a>
        </nav>
    </header>
    <main>
        <h2>Add New Book</h2>
        <form action="add-book.php" method="post" class="master">
            <label for="title">Title:</label>
            <input type="text" id="title" name="title" required>

            <label for="author">Author:</label>
            <input type="text" id="author" name="author" required>

            <label for="publisher">Publisher:</label>
            <input type="text" id="publisher" name="publisher" required>

            <label for="year">Year:</label>
            <input type="number" id="year" name="year" required>

            <button type="submit" name="submit">Add Book</button>
        </form>
    </main>
    <footer>
        <p>&copy; 2025 Library Management System. All rights reserved.</p>
    </footer>
</body>
</html>