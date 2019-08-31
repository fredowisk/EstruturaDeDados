

/* 
 * File:   main.cpp
 * Author: fredaum
 *
 * Created on 23 de agosto de 2019, 19:41
 */

#include <iostream>

using namespace std;

void Programinha() {
     int i =0;
    string nomes[10], pesquisar;
    while (i<10){
        cout << "Informe um nome: " << endl;
        cin >> nomes[i];
        i++;
    }
    cout << "Informe qual nome deseja pesquisar: " << endl;
    cin >> pesquisar;
    i=0;
    while(pesquisar != nomes[i]) 
        i++;
    
    if (pesquisar == nomes[i])
    cout << "Nome encontrado!" << endl << "Nome: " << pesquisar << endl << 
            "Posição: " << i << endl;
    else
        cout << "Nome não encontrado! Finalizando..." << endl;
}

int main(int argc, char** argv) {
    Programinha();

    return 0;
}



