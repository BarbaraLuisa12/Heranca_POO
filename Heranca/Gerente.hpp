/*------------------------GERENTE---------------------
Tipo da classe: classe herdeira de Funcionário.
Atributos herdados: nome (string), id (int) e salarioBase(double)
Atributos específicos: bonus_anual 
Métodos: 
    - Método construtor contendo seus atributos bases - construtor padrão + atributo bonus_anual;
    - Método calcularSalarioTotal() retorna o salário base + bônus anual.

Observações: o salário do gerente corresponde apenas ao salário base + bonus_anual.
*/
#ifndef GERENTE
#define GERENTE

#include <string>
#include "Funcionario.hpp"

class Gerente : public Funcionario{
    private: 
        double bonus_anual;

    public:
        Gerente(string nome, int id, double salarioBase, double bonus_anual);
        double calcularSalarioTotal() const override; 
};

#endif