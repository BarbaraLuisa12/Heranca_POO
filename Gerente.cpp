#include "Gerente.hpp"

Gerente::Gerente(string nome, int id, double salarioBase, double bonus_anual):
    Funcionario(nome, id, salarioBase), bonus_anual(bonus_anual)  {}

double Gerente::calcularSalarioTotal() const {
    double bonusMensal = bonus_anual/12;
    return salarioBase + bonusMensal;
}