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

// se vier alguma coisa pro get(acao) ira para a variavel $acao 
// caso contrario ela ira expirar uma variavel chamada $acao que foi definida em 'todas_tafreas.php'
$acao = isset($_GET['acao']) ? $_GET['acao'] : $acao;

// echo $acao;


// recuperando o parametro 
if ($acao == 'inserir') {

    $tarefa = new Tarefa();
    $tarefa->__set('tarefa', $_POST['tarefa']);

    $conexao = new Conexao();

    $tarefaService = new TarefaService($conexao, $tarefa);
    $tarefaService->inserir();

    header('Location: nova_tarefa.php?inclusao=1');
} elseif ($acao == 'recuperar') {

    $tarefa = new Tarefa();
    $conexao = new Conexao();

    $tarefaService = new TarefaService($conexao, $tarefa);
    $tarefas = $tarefaService->recuperar();
} elseif ($acao == 'atualizar') {
    // echo '<pre>';
    // print_r($_POST);
    // echo '</pre>';

    $tarefa = new Tarefa();
    $tarefa->__set('id', $_POST['id']);
    $tarefa->__set('tarefa', $_POST['tarefa']);

    $conexao = new Conexao();

    $tarefaService = new TarefaService($conexao, $tarefa);
    if ($tarefaService->atualizar()) {
        header('location: todas_tarefas.php');
    }
} elseif ($acao == 'remover') {

    $tarefa = new Tarefa();
    $tarefa->__set('id', $_GET['id']);

    $conexao = new Conexao();

    $tarefaService = new TarefaService($conexao, $tarefa);
    $tarefaService->remover();

    header('location: todas_tarefas.php');
} else if ($acao == 'marcarRealizada') {

    $conexao = new Conexao();

    $conexao = $conexao->conectar();

    $query = 'SELECT id_status FROM tb_tarefas WHERE id = :id';
    $statement = $conexao->prepare($query);
    $statement->bindValue(':id', $_GET['id']);
    $statement->execute();

    $id_status = $statement->fetchAll(PDO::FETCH_OBJ)[0]->id_status;

    if ($id_status == 1) {

        $query = 'UPDATE tb_tarefas SET id_status = 2 WHERE id = :id';
        $statement = $conexao->prepare($query);
        $statement->bindValue(':id', $_GET['id']);
        $statement->execute();
    }

    header('location: todas_tarefas.php');
}

elseif ($acao == 'recuperarTarefasPendentes') {
    $tarefa = new Tarefa();
    $tarefa ->__set('id_status', 1);

    $conexao = new Conexao();

    $tarefaService = new TarefaService($conexao, $tarefa);
    $tarefas = $tarefaService->recuperarTarefasPendentes();
}
