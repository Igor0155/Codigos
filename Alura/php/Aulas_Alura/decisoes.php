<?php

$idade = 17;
$nome = 'Gerald';
$numero_pessoas = 2;

PHP_EOL;
echo "Você so pode entrar se tiver a partir que 18 anos ou a parti de 16 anos acompanhado" . PHP_EOL;

/**
 * sintaxes
 * Ou "|| - or"
 * e "and - &&"
 * maior que ">"
 * menor que "<"
 * diferente que "!="
 * igual "=="
 * maior ou igual ">="
 * menor ou igual "<="
 * senao "else if - elseif"
 * 
 */

if ($idade >= 18) {
    echo "Você tem $idade anos. Pode entrar sozinho" . PHP_EOL;
    // echo '';
} else if ($idade >= 16 and $numero_pessoas > 1) {
    echo "Você tem $idade anos, está  acompanhado(a), então pode entrar";
} else {
    echo "Você so tem $idade anos." . PHP_EOL;
    echo "Você não pode entrar";
}