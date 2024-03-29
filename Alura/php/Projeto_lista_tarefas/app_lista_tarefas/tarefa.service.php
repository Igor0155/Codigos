<?php

// functions para comunicação com o bd 

class TarefaService
{


    private $conexao;
    private $tarefa;

    public function __construct(Conexao $conexao, Tarefa $tarefa)
    {
        $this->conexao = $conexao->conectar();
        $this->tarefa = $tarefa;
    }
    public function inserir()
    {
        $query = 'INSERT INTO tb_tarefas(tarefa)VALUES(:tarefa)';
        $stmt = $this->conexao->prepare($query);
        $stmt->bindValue(':tarefa', $this->tarefa->__get('tarefa'));
        $stmt->execute();
    }
    public function recuperar()
    {
        // $query = 'select id, id_status, tarefa from tb_tarefas';
        $query =
            'SELECT
                t.id, s.status, t.tarefa
            FROM 
                tb_tarefas AS t
                LEFT JOIN tb_status AS s ON (t.id_status = s.id)';

        $stmt = $this->conexao->prepare($query);
        $stmt->execute();
        // retornando array de obj 
        return $stmt->fetchAll(PDO::FETCH_OBJ);
    }
    public function atualizar()
    {
        // teste 
        // print_r($this->tarefa);

        $query = "UPDATE tb_tarefas SET tarefa = :tarefa WHERE id = :id";
        $stmt = $this->conexao->prepare($query);
        $stmt->bindValue(':tarefa', $this->tarefa->__get('tarefa'));
        $stmt->bindValue(':id', $this->tarefa->__get('id'));
        return $stmt->execute();
    }
    public function remover()
    {
        $query = 'DELETE FROM tb_tarefas WHERE id = :id';
        $stmt = $this->conexao->prepare($query);
        $stmt->bindValue(':id', $this->tarefa->__get('id'));
        $stmt->execute();
    }

    public function marcarRealizada()
    {

        $query = "UPDATE tb_tarefas SET id_status = ? WHERE id = ?";
        $stmt = $this->conexao->prepare($query);
        $stmt->bindValue(1, $this->tarefa->__get('id_status'));
        $stmt->bindValue(2, $this->tarefa->__get('id'));
        return $stmt->execute();
    }

    public function recuperarTarefasPendentes()
    {
        $query =
            'SELECT
                t.id, s.status, t.tarefa
            FROM
                tb_tarefas AS t
                LEFT JOIN tb_status AS s ON (t.id_status = s.id)
            WHERE
                t.id_status = :id_status';

        $stmt = $this->conexao->prepare($query);
        $stmt->bindValue(':id_status', $this->tarefa->__get('id_status'));
        $stmt->execute();
        return $stmt->fetchAll(PDO::FETCH_OBJ);
    }
}
