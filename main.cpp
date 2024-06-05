#include <iostream>
#include <vector>

#include "Estagiario.hpp"
 #include "Funcionario_Regular.hpp"
#include "Gerente.hpp"

using namespace std;
using std::cout;
using std::vector;

int main(){

    vector<Funcionario*> funcionarios;

    Funcionario_Regular funcionarioR("Ana Maria", 58962, 2800);
    Gerente gerente("Rodrigo", 17452, 10000, 35000);
    Estagiario estagiario("Enzo", 85632, 2800);

    funcionarios.push_back(&funcionarioR);
    funcionarios.push_back(&gerente);
    funcionarios.push_back(&estagiario);

    for(const auto& funcionario : funcionarios){
        cout << "Nome: " << funcionario->getNome();
        cout << ", ID: " << funcionario->getId();
        cout << ", Salario Total: " << funcionario -> calcularSalarioTotal() << endl;
    }

    return 0;
}