
/* 
 * File:   main.cpp
 * Author: fredaum
 *
 * Created on 29 de agosto de 2019, 21:58
 */

#include <iostream>

using namespace std;

struct pessoa {
    string nome[5];
    string endereco[5];
    string cpf[5];
    int idade[5];
};

int main(int argc, char** argv) {
    int i = 0;
    pessoa pes;
    for(i=0; i<5;i++){
        cout << "Informe o nome: " << endl;
        cin >> pes.nome[i];
        cout << "Informe o endereço: " << endl;
        cin >> pes.endereco[i];
        cout << "Informe o CPF: " << endl;
        cin >> pes.cpf[i];
        cout << "Informe a idade: " << endl;
        cin >> pes.idade[i];
    }
    for (i=0; i<5; i++){
        cout << endl << i+1 << "º Pessoa:"<< endl << 
                "Nome: " << pes.nome[i] << endl <<
                "Endereço: " << pes.endereco[i] << endl <<
                "CPF: " << pes.cpf[i] << endl <<
                "Idade: " << pes.idade[i] << endl;
        
    }
    system("pause");
    return 0;
}

