<?php

// incluir um arquivo externo 
/**
 * Caso o arquivo não seja encontrado, include 
 * irá lançar um aviso (E_WARNING) enquanto require 
 * irá lançar um erro e não permitirá a execução do programa. 
 * 
 * include: não dá erro (apenas avisa) se o arquivo não existe, require dá erro 
 * require_once: garante que o arquivo será incluído apenas uma vez
 */
require 'funcoes.php';


// function adiciona2 ($x){
//     return $x + 2;
// }

// $sete = adiciona2(5);

// echo "valor = $sete" .PHP_EOL;

// // exit para ocodigo aqui e nao executa  mais nada de baixo dele 
// exit();


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

titularUpperCase($contasCorrentes['123.456.789-10']);

// unset remove um item de uma lista
unset($contasCorrentes['123.256.789-10']);

// echo "<ul>";

// foreach ($contasCorrentes as $cpf => $conta) {

//     // list('titular' => $titular,  'saldo' => $saldo) = $conta;
//     // outra forma
//     // ['titular' => $titular,  'saldo' => $saldo] = $conta;

//     // dentro da string tirar as aspas simples das listas ou colocar as variaveis entre chaves {}
//     // exibeMensagem(
//     //     // " $cpf {$conta['titular']} {$conta['saldo']}" 
//     //     "$cpf $titular $saldo"
//     // );

//     exibeConta($conta);
// }

// echo "</ul>";



?>

<!DOCTYPE html>
<html lang="pt-br">

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>

<body>
    <h1>Conta correntes</h1>

    <dl>

        <!- <\?=// significa ->
            <?php
            foreach ($contasCorrentes as $cpf => $conta) { ?>
                <dt>
                    <h3><?= $conta['titular']; ?> - <?= $cpf; ?></h3>
                </dt>
                <dd>
                    Saldo: <?= $conta['saldo']; ?>
                </dd>
            <?php } ?>
    </dl>
</body>

</html>