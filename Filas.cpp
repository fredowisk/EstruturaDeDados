/* 
 * File:   main.cpp
 * Author: fredaum
 *
 * Created on 10 de outubro de 2019, 20:09
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    int qtd = 5;
    int vetor[qtd], inicio = 0, fim = 0;
    cout << "Entrando na fila..." << endl;
    for(fim; fim<qtd; fim++){
        vetor[fim] = fim + 1;
        cout << fim + 1 << "º valor: " << vetor[fim] << endl;
    }
    cout << "\nFila cheia! \nPrimeiro da fila: " << vetor[0] << 
            " \nUltimo da fila: " << vetor[fim -1] << endl;
    
    cout << "\nSaindo da fila...\n";
    for(inicio; inicio<qtd; inicio++){
        cout << "Excluindo o " << inicio + 1 << "º valor: " << vetor[inicio] <<endl;
        vetor[inicio] = NULL;
    }
    cout << "\nFila vazia! \n";
    qtd -= qtd;
    cout << "Tamanho da fila: " << qtd << "\nConteudo: " << vetor[qtd];
    return 0;
}

