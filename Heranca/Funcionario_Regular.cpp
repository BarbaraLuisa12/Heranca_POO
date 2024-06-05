#include "Funcionario_Regular.hpp"

Funcionario_Regular::Funcionario_Regular(string nome, int id, double salarioBase):
    Funcionario(nome, id, salarioBase) {}

//Retorna apenas o salario base
double Funcionario_Regular::calcularSalarioTotal() const {
    return salarioBase;
}

