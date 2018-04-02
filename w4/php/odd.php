<?php
    $a = intval (fgets(STDIN));
    $out = '';
    if ( $a % 2 != 1 ) {
        $a -= 1;
    }
    for ( $i = 1; $i < $a; $i += 2 ) {
        $out .= $i . ' ';
    }
    $out .= $a;
    echo $out . PHP_EOL;
?>
