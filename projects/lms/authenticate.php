<?php
$email = $_POST['email'];
$password = $_POST['password'];

$connection = mysqli_connect('localhost', 'ols2403', 'ols2403', 'lms_2403');
if (!$connection) {
    die("Connection failed: " . mysqli_connect_error());
}
$query = "SELECT * FROM user WHERE email = '$email' AND password = PASSWORD('$password')";
$result = mysqli_query($connection, $query);
if (mysqli_num_rows($result) > 0) {
    session_start();
    $_SESSION['email'] = $email;
    header("Location: dashboard.php");
} else {
    echo "Invalid email or password.";
}
mysqli_close($connection);
