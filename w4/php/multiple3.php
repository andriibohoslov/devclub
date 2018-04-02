<?php
    $multiple = intval (fgets(STDIN));
    $out = '';
    
    $multiple -= $multiple % 3;
    
    for ( $i = 0; $i < $multiple; $i += 3 ) {
        $out .= $i . ' ';
    }
    $out .= $multiple;
    echo $out . PHP_EOL;
?>
