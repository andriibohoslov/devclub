<?php
    $multiple = intval (fgets(STDIN));
    $out = '';
    
    $multiple -= $multiple % 5;
    
    for ( $i = 0; $i < $multiple; $i += 5 ) {
        $out .= $i . ' ';
    }
    $out .= $multiple;
    echo $out . PHP_EOL;
?>
