<?php

for ($i=1; $i < 9 ; $i++) { 
    echo "tabuada do $i".PHP_EOL;

    for ($j=0; $j <= 10; $j++) { 
        $result = $i* $j;

       echo "$i x $j = $result".PHP_EOL;
    }
}