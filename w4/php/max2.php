<?php
    $a = fgets(STDIN);
    $b = fgets(STDIN);
    
    if ( $a >= $b ) {
        echo $a . PHP_EOL;
    } else {
        echo $b . PHP_EOL;
    }
?>
