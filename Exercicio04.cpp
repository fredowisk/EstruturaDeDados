/* 
 * File:   main.cpp
 * Author: fredaum
 *
 * Created on 26 de agosto de 2019, 19:34
 */

#include <iostream>

using namespace std;

void Inverter(){
    double numeros[20];
    int i = 0;
    for(i = 1; i<=20; i++){
        cout << "Informe o " << i << "º número: " << endl;
        cin >> numeros[i];
    }
    for(i = 1; i<=20; i++){
        cout << i <<"º Número: " << numeros[i] << endl;
    }
    for(i=20; i>0; i--){
        cout << i << "º Número: " << numeros[i] << endl;
    }
}

int main(int argc, char** argv) {
   
    Inverter();
    
    return 0;
}

