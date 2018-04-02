<?php
    $size = intval (fgets(STDIN));
    
    for ( $row = 1; $row <= $size; $row++) {
        $out = '';
        for ( $col = 1; $col <= $size; $col++) {
            $out .= $col . ' ';
        }
        echo $out . PHP_EOL;
    }
    
    
?>
