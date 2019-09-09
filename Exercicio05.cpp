/* 
 * File:   main.cpp
 * Author: fredaum
 *
 * Created on 26 de agosto de 2019, 19:55
 */

#include <iostream>

using namespace std;

void Tamanho(){
    int N = 2, i =0;
    
    cout << "Informe o tamanho do vetor em números inteiros: " << endl;
    cin >> N;
    
        double A[N]; double B[N]; double Soma[N];
        for(i = 1; i<=N; i++){
            cout << "A - Informe o " << i << "º valor: " << endl;
            cin >> A[i];
        cout << "B - Informe o " << i+1 << "º valor: " << endl;
        cin >> B[i];
        Soma[i] = A[i] + B[i];
        }
        for(i = 1; i<=N; i++){
        cout << "Soma dos vetores" << endl <<
                i << "º Número: " << Soma[i] << endl;
        }
}

int main(int argc, char** argv) {
    
    Tamanho();
    
    return 0;
}

