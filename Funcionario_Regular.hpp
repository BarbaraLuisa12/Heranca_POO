/*------------------------FUNCIONARIO_REGULAR---------------------
Tipo da classe: classe herdeira de Funcionário.
Atributos herdados: nome (string), id (int) e salarioBase(double)
Atributos específicos: não possui. 
Métodos: 
    - Método construtor contendo seus atributos bases - construtor padrão;
    - Método calcularSalarioTotal() em que cada retorna apenas o salário base.

Observações: o salário do funcionário regular corresponde apenas ao salário base dado pela classe base.
Além disso, utiliza apenas o contrutor padrão, sem atributos adicionais.
*/

#ifndef FUNCIONARIO_REGULAR
#define FUNCIONARIO_REGULAR 

#include <string> 
#include "Funcionario.hpp"

using std::string;

class Funcionario_Regular : public Funcionario {
    public:
        Funcionario_Regular(string nome, int id, double salarioBase);
        double calcularSalarioTotal() const override; 
};

#endif