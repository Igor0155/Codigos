<?php

class Tarefa
{
    private int $id;
    private $id_status;
    private string $tarefa;
    private $data_cadastro;


    public function __get($atributo)
    {
        return $this->$atributo;
    }


    public function __set($atributo, $valor)
    {
        $this->$atributo  = $valor;
    }
}
