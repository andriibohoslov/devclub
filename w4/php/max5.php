<?php
    $a = fgets(STDIN);
    $b = fgets(STDIN);
    $c = fgets(STDIN);
    $d = fgets(STDIN);
    $e = fgets(STDIN);
    
    if ( $a < $b ) {
        $a = $b;
    }
    if ( $a < $c ) {
        $a = $c;
    }
    if ( $a < $d ) {
        $a = $d;
    }
    if ( $a < $e ) {
        $a = $e;
    }
    echo $a . PHP_EOL;
?>
