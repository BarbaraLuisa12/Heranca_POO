#include "Estagiario.hpp"

Estagiario::Estagiario(string nome, int id, double salarioBase):
    Funcionario(nome, id, salarioBase){}

double Estagiario::calcularSalarioTotal() const {
    return salarioBase * 0.5;
}
