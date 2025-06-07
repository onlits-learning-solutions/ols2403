<!DOCTYPE html>
<html lang="en">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>LMS - Home</title>
    <link rel="stylesheet" href="styles.css">
</head>

<body>
    <header>
        <h1>Library Management System</h1>
    </header>
    <main>
        <div class="col-2">
            <div class="left-panel">
                <h2>Welcome to the Library Management System</h2>
                <p>Here you can manage all the books in the library.</p>
            </div>
            <div class="right-panel">
                <form action="authenticate.php" method="post" class="master">
                    <label for="email">Email</label>
                    <input type="email" name="email" id="email">
                    <label for="password">Password</label>
                    <input type="password" name="password" id="password">
                    <button>Login</button>
                </form>
            </div>
        </div>
    </main>
    <footer>
        <p>&copy; 2023 Library Management System. All rights reserved.</p>
    </footer>
</body>

</html>