<?php
    $a = fgets(STDIN);
    $b = fgets(STDIN);
    $c = fgets(STDIN);
    
    if ( $a < $b ) {
        $a = $b;
    }
    if ( $a < $c ) {
        $a = $c;
    } 
    echo $a . PHP_EOL;
?>
