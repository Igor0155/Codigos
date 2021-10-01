<?php

/**
 * Ao trabalhar com formulários, é comum a necessidade de validar 
 * um email e não existe uma forma padrão de fazer isso. Existem 
 * diversas regras de , por exemplo, que haja algo escrito antes do @
 * Uma forma de verificar isso é usando a função
 * strpos que verifica a posição da primeira ocorrencia de uma string:
 */

function validaEmail($email){

    $posicao = strpos($email,'@');

    // se o @ estiver na posição 0 quer dizerque faltou a conta do usuario
    if ($posicao === 0) {
        //exibe uma menssagem de erro pra view dizendo que faltou a conta 

        // se nao tiver @ na variavel exibe uma mensagem de erro 
        if ($posicao === null) {
            // exibe uma menssagem de erro dizendo que aquele campo é especifico para email
            
        }
        
    }

}
