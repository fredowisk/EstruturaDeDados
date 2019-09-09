
/* 
 * File:   main.cpp
 * Author: fredao
 *
 * Created on 8 de agosto de 2019, 21:40
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    float peso, altura, imc;
    cout << "Digite o seu peso: " << endl;
    cin >> peso;
    cout << "Digite a sua altura: " << endl;
    cin >> altura;
    
    imc = peso / (altura * altura);
    
    if (imc >= 25)
        cout << "Você está acima do peso! " << endl;
    
    else if (imc >= 20)
        cout << "Você está no peso ideal! " << endl;
    
    else
        cout << "Você está abaixo do peso! " << endl;
    
    return 0;
}

