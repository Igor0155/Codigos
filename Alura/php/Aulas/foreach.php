<?php

// $conta1 = [
//     //chave      valor da chave
//     'titular' => 'Vinicius',
//     'saldo' => 1000,
// ];

// $conta2 = [
//     'titular' => 'Maria',
//     'saldo' => 10000
// ];

// $conta3 = [
//     'titular' => 'Alberto',
//     'saldo' => 300
// ];

$contasCorrentes = [
    '123.456.789-10' => [
        //chave      valor da chave
        'titular' => 'Vinicius',
        'saldo' => 1000,
    ],

    '123.456.789-11' =>  [
        'titular' => 'Maria',
        'saldo' => 10000
    ],
    '123.256.789-10' => [
        'titular' => 'Alberto',
        'saldo' => 300
    ]
];

$contasCorrentes['123.579.789-28'] = [
    'titular' => 'Claudia',
    'saldo' => 2100
];

foreach ($contasCorrentes as $cpf => $conta) {
    // echo $conta['titular'] .PHP_EOL;
    echo $cpf . PHP_EOL;
}
