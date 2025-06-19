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

    mysqli_close($connection);
    
    return $books;
}

function getBook($id)
{
    $connection = mysqli_connect('localhost', 'ols2403', 'ols2403', 'lms_2403');

    if (!$connection) {
        die("Connection failed: " . mysqli_connect_error());
    }

    $query = "SELECT * FROM book WHERE id = '$id'";
    $result = mysqli_query($connection, $query);
    
    if (!$result) {
        die("Query failed: " . mysqli_error($connection));
    }
      
    $book = mysqli_fetch_assoc($result);
    
    mysqli_close($connection);
    
    return $book;
}

function bookCount() {
    $connection = mysqli_connect('localhost', 'ols2403', 'ols2403', 'lms_2403');

    if (!$connection) {
        die("Connection failed: " . mysqli_connect_error());
    }

    $query = "SELECT COUNT(*) AS count FROM book";
    $result = mysqli_query($connection, $query);
    
    if (!$result) {
        die("Query failed: " . mysqli_error($connection));
    }
    
    $row = mysqli_fetch_assoc($result);
    
    mysqli_close($connection);
    
    return $row['count'];
}