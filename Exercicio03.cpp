/* 
 * File:   main.cpp
 * Author: fredaum
 *
 * Created on 25 de agosto de 2019, 19:13
 */

#include <iostream>

using namespace std;
void Multiplica (){
     double A[10], x = 0, M[10];
    int i = 0;
    for(i=0; i<10; i++){
        cout << "Informe o " << i+1 << "º valor:" << endl;
        cin >> A[i];
    }
    cout << "Informe o valor que irá multiplicar do vetor:" << endl;
    cin >> x;
    for(i=0; i<10; i++) {
        M[i] = A[i] * x;
        cout << i+1 << "º valor multiplicado: " << M[i] << endl;
    }
}

int main(int argc, char** argv) {
    
    Multiplica();
    
    return 0;
}

