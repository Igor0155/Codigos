<?php


// "->" Acessa um atributo desse objeto 

/**
 * Quando utilizamos condicionais (if, else if, else), 
 * aumentamos a complexidade do nosso código. Isso dificulta a leitura.
 * Quanto menos condicionais tivermos, mais natural e fácil se torna a leitura. 
 * A técnica Early Return ajuda bastante neste caso.
 */

class Conta
{
    // defir dados da conta e ja definindo o tipo da variavel(string,float,int)
    private string $cpfTitular;
    private string $nomeTitular;
    // " private float $saldo = 0;" sempre que criar um objeto do tipo Conta o saldo ira vir zerado 
    // so a conta pode ter acesso ao saldo
    private float $saldo;


    public function __construct(string $cpfTitular, string $nomeTitular)
    {
        // echo "Criando nova conta". PHP_EOL;
        $this->cpfTitular = $cpfTitular;
        $this->nomeTitular = $nomeTitular;
        $this->saldo = 0;

    }





    // uma função que esta dentro de uma classe e chamada de metodo 
    // "$this" e a referencia da conta em que foi chamada o metodo 
    public function sacar(float $valorASacar): void # " : void " e opcional
    {
        if ($valorASacar > $this->saldo) {
            echo "Saldo indisponível";
            return;
        }
        $this->saldo -= $valorASacar;
    }

    public function depositar(float $valorADepositar): void # " : void " e opcional
    {
        if ($valorADepositar < 0) {
            echo "Valor precisa ser positivo";
            return;
        }
        $this->saldo += $valorADepositar;
    }

    public function transferir(float $valorATransferir, Conta $contaDestino): void
    {
        if ($valorATransferir > $this->saldo) {
            echo "Saldo indisponível";
            return;
        }

        $this->sacar($valorATransferir);
        $contaDestino->depositar($valorATransferir);
    }

    public function recuperarSaldo() : float
    {
        return $this->saldo;
    }



    public function recuperarCpfTitular() : string
    {
        return $this->cpfTitular;
    }



    public function recuperarNomeTitular() : string
    {
        return $this->nomeTitular;
    }



    // public function defineCpfTitular(string $cpf)
    // {
    //     $this -> cpfTitular = $cpf;
    // }

    // public function defineNomeTitular(string $nome)
    // {
    //     $this -> nomeTitular = $nome;
    // }
}
