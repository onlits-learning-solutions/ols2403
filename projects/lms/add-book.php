<?php
$connection = mysqli_connect('localhost', 'ols2403', 'ols2403', 'lms_2403');

if (!$connection) {
    die("Connection failed: " . mysqli_connect_error());
}

print_r($_POST);

if(isset($_POST['submit'])) {
    $title = $_POST['title'];
    $author = $_POST['author'];
    $publisher = $_POST['publisher'];
    $year = $_POST['year'];

    $query = "INSERT INTO book (title, author, publisher, year) VALUES ('$title', '$author', '$publisher', '$year')";
    
    if (mysqli_query($connection, $query)) {
        header("Location: book.html");
    } else {
        echo "Error: " . mysqli_error($connection);
    }
}