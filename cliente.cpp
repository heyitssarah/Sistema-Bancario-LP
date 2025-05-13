#include <iostream> //Permite usar funções de entrada e saída
#include <string> //Permite usar strings
#include "cliente.h" //Inclui o conteúdo do cliente.h
using namespace std;

//Construtor que inicializa nome e cpf com valores recebidos
Cliente::Cliente(std::string nomeCliente, std::string cpfCliente)
    : nome(nomeCliente), cpf(cpfCliente) {}

//Retorna nome do cliente
string Cliente::getNome() const {
    return nome;
}

//Retorna CPF do cliente
string Cliente::getCpf() const {
    return cpf;
}


