<?php

// este arquivo que vai ser responsavel por 
// controlar a persistencia das tarefas no banco de dados 

// teste 1 
// echo '<pre>';
// print_r($_POST);
// echo '</pre>';

require "../../app_lista_tarefas/tarefa.model.php";
require "../../app_lista_tarefas/tarefa.service.php";
require "../../app_lista_tarefas/conexao.php";

$tarefa = new Tarefa();
$tarefa->__set('tarefa', $_POST['tarefa']);

$conexao = new Conexao();

$tarefaService = new TarefaService($conexao, $tarefa);
$tarefaService->inserir();

// teste 2 
// echo '<pre>';
// print_r($tarefaService);
// echo '</pre>';


header('Location: nova_tarefa.php?inclusao=1'); 
