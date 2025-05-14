#include "contaBancaria.h"
using namespace std;

//Construtor que inicializa número da conta, cleinte titular e saldo inicial
ContaBancaria::ContaBancaria(int numeroConta, const Cliente& clienteTitular, double saldoInicial)
    : numero(numeroConta), titular(clienteTitular), saldo(saldoInicial) {}

//Adiciona um valor ao saldo (depósito)
void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        saldo += valor;
    }
}

//Subtrai um valor do saldo, se tiver saldo suficiente (saque)
void ContaBancaria::sacar(double valor) {
    if (valor > 0 && saldo >= valor) {
        saldo -= valor;
    } else {
        cout << "Saldo insuficiente para saque";
    }
}

//Transfere um valor para outra conta, se tiver saldo suficente
void ContaBancaria::transferir(double valor, ContaBancaria &destino) {
    if (valor > 0 && saldo >= valor) {
        saldo -= valor;
        destino.depositar(valor);
        cout << "Transferido: R$ " << valor << " da conta " << numero
                  << " para a conta " << destino.numero << endl;
    } else {
        cout << "Saldo insuficiente para transferência";
    }
}

//Transfere um valor dividido igualmente entre duas contas destino
void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2) {
    double metade = valor / 2.0;
    if (valor > 0 && saldo >= valor) {
        saldo -= valor;
        destino1.depositar(metade);
        destino2.depositar(metade);
        cout << "Transferido: R$ " << metade << " para cada conta ("
                  << destino1.numero << " e " << destino2.numero << ") da conta "
                  << numero << endl;
    } else {
        cout << "Saldo insuficiente para transferência";
    }
}

//Exibe o saldo atual da conta
void ContaBancaria::exibirSaldo() const {
    cout << "Saldo atual da conta " << numero << ": R$ " << saldo << endl;
}

//Mostra os dados do titular e da conta
void ContaBancaria::exibirInformacoes() const {
    cout << "Titular: " << titular.getNome() << ", CPF: " << titular.getCpf() << endl;
    cout << "Número da Conta: " << numero << ", Saldo: R$ " << saldo << endl;
}


