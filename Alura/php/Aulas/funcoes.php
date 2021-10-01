<?php

/**
 * Sempre que possível, utilize as funções mb_* para manipular suas strings. :-D
 */

function exibeMensagem(string $mensagem)
{
    echo $mensagem . PHP_EOL . '<br>';
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

// array &$conta o "&" faz com que a função receba o  valor real que e passado 
// e nao uma copia do valor 
function titularUpperCase(array &$conta)
{
    /**
     * A função strtoupper não colocaria letras com acento em maiúsculo,
     *  enquanto a mb_strtoupper consegue fazer isso sem problemas.
     */
    // echo $conta['titular'].PHP_EOL;
    $conta['titular'] = mb_strtoupper($conta['titular']);
}

function exibeConta(array $conta)
{
    ['titular' => $titular, 'saldo' => $saldo] = $conta;
    echo "<li>Titular: $titular. Saldo: $saldo</li>";
}
