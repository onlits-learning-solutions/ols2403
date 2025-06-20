<?php
include 'book-script.php';
$books = getBooks();

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
    <title>LMS - Book</title>
    <link rel="stylesheet" href="styles.css">
</head>

<body>
    <header>
        <h1>Library Management System</h1>
        <nav>
            <a href="dashboard.php">Dashboard</a>
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
        <div class="col-2">
            <div class="col-2-left">
                <h2>Book Section</h2>
            </div>
            <div class="col-2-right">
                <a href="new-book.php">Add a new book</a>
            </div>
        </div>
        <p>Here you can manage all the books in the library.</p>

        <?php if (!$books): ?>
            <p>No books found. Please add a new book.</p>
        <?php else: ?>
            <table class="master">
                <thead>
                    <tr>
                        <th>Book ID</th>
                        <th>Title</th>
                        <th>Author</th>
                        <th>Publisher</th>
                        <th>Year</th>
                        <th>Action</th>
                    </tr>
                </thead>
                <tbody>
                    <?php
                    $i = 0;
                    foreach ($books as $book): ?>
                        <tr>
                            <td><?= $book['id'] ?></td>
                            <td><?= $book['title']; ?></td>
                            <td><?= $book['author']; ?></td>
                            <td><?= $book['publisher']; ?></td>
                            <td><?= $book['year']; ?></td>
                            <td>
                                <a href="edit-book.php?id=<?= $book['id']; ?>">Edit</a> |
                                <a href="delete-book.php?id=<?= $book['id']; ?>">Delete</a>
                            </td>
                        </tr>
                    <?php endforeach; ?>
                </tbody>
            </table>
        <?php endif; ?>
    </main>
    <footer>
        <p>&copy; 2025 Library Management System. All rights reserved.</p>
    </footer>
</body>

</html>