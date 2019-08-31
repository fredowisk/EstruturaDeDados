/* 
 * File:   main.cpp
 * Author: fredao
 *
 * Created on 9 de agosto de 2019, 12:02
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    float novoSal, salario;
    cout << "Informe o salário: " << endl;
    cin >> salario;
    if (salario < 400)
        cout << "Valor inválido!" << endl;
    else if (salario<1000)
        novoSal = salario * 0.15;
    else if (salario>=1000 && salario<=1500)
        novoSal = salario * 0.10;
    else
        novoSal = salario * 0.05;
    
    novoSal += salario;
    cout << "Antigo salário: " << salario 
            << " - Novo salário: " << novoSal << endl;
    return 0;
}

