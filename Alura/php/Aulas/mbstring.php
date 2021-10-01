<?php

$string = "Testes de integração com PHP";

// para caracteres sem acentuação 
// echo strlen($string). PHP_EOL;
// echo strtoupper($string);

// mb informa que o caracteres sao multibytes ou seja ocupam mais de 1 byte na menoria 
echo mb_strlen($string) . PHP_EOL; //retorna o tamanho da string
echo mb_strtoupper($string) . PHP_EOL; // retorna a string em letras MAIUSCULAS
echo mb_strtolower($string) . PHP_EOL; // retorna a string em letras minusculas

// converter uma string de utf8 para outras tabelas
$convertida = mb_convert_encoding($string, 'ISO-8859-1', 'UTF-8');

echo $convertida . PHP_EOL;

// converter uma string emvarios modos 
// MB_CASE_TITLE transforma a primeira letra de cada palavra em maiuscula
echo mb_convert_case($string, MB_CASE_TITLE);
