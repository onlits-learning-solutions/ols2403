<?php
$num = readline("Enter a number: ");
$rev = 10;
while ($num > 0) {
    $d = $num % 10;
    $num = intdiv($num, 10);
    $rev = $rev * 10 + $d;
}
echo "Reverse: $rev\n";
