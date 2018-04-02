<?php
    $divident = intval (fgets(STDIN));
    $divisor = intval (fgets(STDIN));
    $out = '';
    
    if ( $divisor < 0 ) {
        $divisor *= -1;
    }
    $multiple = $divident - $divident % $divisor;
    
    if ( $multiple > $divident ) {
        $multiple = $multiple - $divisor;
    }
    echo $multiple . PHP_EOL;
?>
