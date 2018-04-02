<?php
    $a = intval (fgets(STDIN));
    $out = '';
    for ( $i = 1; $i < $a; $i++ ) {
        $out .= $i . ' ';
    }
    $out .= $a;
    echo $out . PHP_EOL;
?>
