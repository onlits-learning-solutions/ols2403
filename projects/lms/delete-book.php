<?php
$connection = mysqli_connect('localhost', 'ols2403', 'ols2403', 'lms_2403');

if (!$connection) {
    die("Connection failed: " . mysqli_connect_error());
}

if (isset($_GET['id'])) {
    $id = $_GET['id'];

    $query = "DELETE FROM book WHERE id='$id'";

    if (mysqli_query($connection, $query)) {
        header("Location: book.php");
        exit();
    } else {
        echo "Error: " . mysqli_error($connection);
    }
}
