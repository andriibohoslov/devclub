<?php
    $multiple = intval (fgets(STDIN));
    $divisor = intval (fgets(STDIN));
    $out = '';
    
    $multiple -= $multiple % $divisor;
    
    for ( $i = 0; $i < $multiple; $i += $divisor ) {
        $out .= $i . ' ';
    }
    $out .= $multiple;
    echo $out . PHP_EOL;
?>
