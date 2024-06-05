/*------------------------FUNCIONARIO---------------------
Tipo da classe: classe base
Atributos: nome (string), id (int) e salarioBase(double)
Métodos: 
    - Método construtor contendo seus atributos bases - construtor padrão;
    - Método calcularSalarioTotal() em que cada classe retorne o salario total (incluindo bônus, se aplicável).
*/

#ifndef FUNCIONARIO
#define FUNCIONARIO

#include <string> 

using std::string; 

class Funcionario {

    public:
    string nome;
    int id; 
    double salarioBase; 

    public:
    Funcionario(string nome, int id, double salarioBase);     //Construtor padrão

    //O método deve ser marcado como const para ter garantia de não modificação
    virtual double calcularSalarioTotal() const = 0;
    
    virtual string getNome();
    virtual int getId();
    virtual double getSalarioBase();
};

#endif  