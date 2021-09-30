<?php

$conta1 = [
    //chave      valor da chave
    'titular' => 'Vinicius',
    'saldo' => 1000,
];

$conta2 = [
    'titular' => 'Maria',
    'saldo' => 10000
];

$conta3 = [
    'titular' => 'Alberto',
    'saldo' => 300
];

// echo $conta1['titular'];

$contasCorrentes = [$conta1, $conta2, $conta3];

for ($i = 0; $i < count($contasCorrentes); $i++) {
    echo $contasCorrentes[$i]['titular']. PHP_EOL;
}
