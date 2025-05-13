#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

//Declaração da classe
class Cliente {
private:
    string nome;
    string cpf;

public:
    Cliente(std::string nomeCliente, std::string cpfCliente); //Construtor
    //Métodos para acessar dados do cliente (getters)
    string getNome() const; 
    string getCpf() const;
};

#endif


