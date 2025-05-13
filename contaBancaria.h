#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H

#include "cliente.h"
#include <iostream>
#include <string>

//Declaração da classe
class ContaBancaria {
private:
    int numero;       
    double saldo;    
    Cliente titular;  

public:
    //Construtor que inicializa os atributos
    ContaBancaria(int numeroConta, const Cliente& clienteTitular, double saldoInicial = 0.0);

    //Métodos públicos 
    void depositar(double valor); //Deposita valor na conta
    void sacar(double valor);     //Saca valor da conta

    //Sobrecarga do método transferir
    void transferir(double valor, ContaBancaria& destino); //Transfere valor para uma conta só
    void transferir(double valor, ContaBancaria& destino1, ContaBancaria& destino2); //Transfere velor dividido igualmente para duas contas 

    //Métodos para exibir o saldo e as informações
    void exibirSaldo() const;
    void exibirInformacoes() const;
};

#endif


