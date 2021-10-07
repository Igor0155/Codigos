<?php

require_once 'src/Conta.php';


$primeiraConta = new Conta('123.456.789-10','Igor Gabriel' );

var_dump($primeiraConta);

$primeiraConta->depositar(500);

$primeiraConta->sacar(300); // isso e certo 
// $primeiraConta -> saldo -= 300; // isso e errado 

// echo $primeiraConta -> saldo;

// $primeiraConta->defineCpfTitular('123.456.789-10');
// $primeiraConta->defineNomeTitular('Igor Gabriel');


echo $primeiraConta->recuperarCpfTitular(). PHP_EOL;
echo $primeiraConta->recuperarNomeTitular(). PHP_EOL;
echo $primeiraConta->recuperarSaldo(). PHP_EOL;