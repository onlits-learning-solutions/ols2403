<?php
$connection = mysqli_connect('localhost', 'ols2403', 'ols2403', 'lms_2403');

if (!$connection) {
    die("Connection failed: " . mysqli_connect_error());
}
if (isset($_POST['submit'])) {
    $id = $_POST['id'];
    $title = $_POST['title'];
    $author = $_POST['author'];
    $publisher = $_POST['publisher'];
    $year = $_POST['year'];

    $query = "UPDATE book SET title='$title', author='$author', publisher='$publisher', year='$year' WHERE id='$id'";

    if (mysqli_query($connection, $query)) {
        header("Location: book.php");
        exit();
    } else {
        echo "Error: " . mysqli_error($connection);
    }
}