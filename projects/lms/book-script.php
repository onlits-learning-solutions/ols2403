<?php

function getBooks() {
    $connection = mysqli_connect('localhost', 'ols2403', 'ols2403', 'lms_2403');

    if (!$connection) {
        die("Connection failed: " . mysqli_connect_error());
    }

    $query = "SELECT * FROM book";
    $result = mysqli_query($connection, $query);
    
    if (!$result) {
        die("Query failed: " . mysqli_error($connection));
    }
    
    $books = [];
    while ($row = mysqli_fetch_assoc($result)) {
        $books[] = $row;
    }
    
    return $books;
}