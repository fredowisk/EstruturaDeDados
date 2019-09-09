/* 
 * File:   main.cpp
 * Author: fredao
 *
 * Created on 9 de agosto de 2019, 11:39
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    int horasT;
    float salario, salarioB, valorH, imposto, salarioL;
    
    cout << "Informe a quantidade de horas trabalhadas: " << endl;
    cin >> horasT;
    
    cout << "Informe o valor do salário mínimo: " << endl;
    cin >> salario;
    
    valorH = salario / horasT;
    
    salarioB = horasT * valorH;
    
    imposto = salarioB * 0.03;
    
    salarioL = salarioB - imposto;
    
    cout << "O salário líquido é: " << salarioL << endl;
    
    
    return 0;
}

