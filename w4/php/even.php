<?php
    $a = intval (fgets(STDIN));
    $out = '';
    $a -= $a % 2;
    for ( $i = 0; $i < $a; $i+=2 ) {
        $out .= $i . ' ';
    }
    $out .= $a;
    echo $out . PHP_EOL;
?>
