<?php
    $size = intval (fgets(STDIN));
    $count = '';
    for ( $row = 1; $row <= $size; $row++) {
        $out = '';
        for ( $col = 1; $col <= $size; $col++) {
            $count += 1;
            $out .= $count . ' ';
        }
        echo $out . PHP_EOL;
    }
?>
