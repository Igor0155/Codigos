<?php

// $idadeList = array(21,18,56,23,58,14,16);  Forma antiga

// Nova forma de declarar uma list 
$idadeList = [21, 29, 19, 25, 30, 41, 18];

// $idadeVini = $idadeList[0];
// $idadeJoao = $idadeList[1];
// $idadeMaria = $idadeList[2];
//                    |
//Forma mais simples  ˅
list ($idadeVini, $idadeJoao, $idadeMaria) = $idadeList;

// pegando a primeira idade 
$firstIdade = $idadeList[0];
// echo $firstIdade;

// Adicionando item  na lista o item  sera adicionado na ultima posição
$idadeList[] = 16;

foreach ($idadeList as $idade) {
    echo $idade . PHP_EOL;
}
