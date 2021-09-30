<?php

// function adiciona2 ($x){
//     return $x + 2;
// }

// $sete = adiciona2(5);

// echo "valor = $sete" .PHP_EOL;

// // exit para ocodigo aqui e nao executa  mais nada de baixo dele 
// exit();

function exibeMensagem(string $mensagem)
{
    echo $mensagem . PHP_EOL;
}

// ": array" informa qual o tipo do retorno que a função ira retornar
function sacar(array $cliente, float $saque): array
{
    if ($saque > $cliente['saldo']) {
        exibeMensagem($cliente['titular'] . " Você não pode sacar esse valor!");
    } else {

        $cliente['saldo'] -= $saque;
    }

    return $cliente;
}
// ": array" informa qual o tipo do retorno que a função ira retornar
function depositar(array $cliente, float $valorDeposito): array
{

    if ($valorDeposito > 0) {
        $cliente['saldo'] += $valorDeposito;
    } else {
        exibeMensagem("Depositos precisam ser positivos");
    }

    return $cliente;
}


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


// // retirando 500do saldo da maria 
// $contasCorrentes['123.456.789-11']['saldo'] -= 500;


$contasCorrentes['123.456.789-11'] = sacar($contasCorrentes['123.456.789-11'], 500);
$contasCorrentes['123.256.789-10'] = sacar($contasCorrentes['123.256.789-10'], 200);
$contasCorrentes['123.456.789-10'] = depositar($contasCorrentes['123.456.789-10'], 900);


foreach ($contasCorrentes as $cpf => $conta) {

    exibeMensagem($cpf . " " . $conta['titular'] . " " . $conta['saldo']);
}
