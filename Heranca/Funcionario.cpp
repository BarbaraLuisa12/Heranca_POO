#include "Funcionario.hpp"


Funcionario::Funcionario(string nome, int id, double salarioBase)
    : nome(nome), id(id), salarioBase(salarioBase) {} 


/* Também é possível escrever desta forma, sem alterar a funcionalidade do código:

Funcionario::Funcionario(string nome, int id, double salarioBase ){
    this->nome = nome;
    this->id = id;
    this -> salarioBase = salarioBase;

}*/

string Funcionario::getNome(){
    return nome;
}

int Funcionario::getId(){
    return id;
}

double Funcionario::getSalarioBase(){
    return salarioBase;
}