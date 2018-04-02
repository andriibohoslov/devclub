<?php
    $a = intval (fgets(STDIN));
    $flag = 1;
    
    if ( $a % 2 == 0 ) {
        echo "alpha" . PHP_EOL;
        $flag = 0;
    }
    if ( $a % 3 == 0 ) {
        echo "bravo\n" . PHP_EOL;
        $flag = 0;
    }
    if ( $a % 5 == 0 ) {
        echo "charlie" . PHP_EOL;
        $flag = 0;
    }
    if ( $flag ) {
        echo "zulu" . PHP_EOL;
    }
?>
