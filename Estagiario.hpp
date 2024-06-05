#ifndef ESTAGIARIO
#define ESTAGIARIO

#include <string> 
#include "Funcionario.hpp"

class Estagiario : public Funcionario {
    
    public:
        Estagiario(string nome, int id, double salarioBase);
        double calcularSalarioTotal() const override; 
};

#endif