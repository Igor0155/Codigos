<?php

$peso = 80;
$altura = 1.70;

$imc = $peso / ($altura ** 2);
if ($imc >= 18.5 and $imc <= 24.9) {
    echo "Seu peso está ideal!";
} elseif ($imc < 18.5) {
    echo "Você está magro!";
} else {
    echo "Você está gordo!";
}
