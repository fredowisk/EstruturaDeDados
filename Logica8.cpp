/* 
 * File:   main.cpp
 * Author: fredao
 *
 * Created on 9 de agosto de 2019, 17:13
 */

#include <iostream>
#include <thread>

using namespace std;

int main(int argc, char** argv) {
    int candidato1 = 0, candidato2 = 0, nulo = 0, branco= 0, op, total= 0, quebra = 1;
    
    while (quebra != 0){
    cout<< " - URNA ELETRONICA - " << endl <<
            "1 - Jair Messias Bolsonaro " << endl <<
            "2 - Fernando Haddad " << endl <<
            "3 - Voto nulo " << endl <<
            "4 - Voto em brano " << endl <<
            "5 - Finalizar votação" << endl;
    cin >> op;
    
    switch(op){
        case 1:
            candidato1 += 1;
            break;
        case 2:
            candidato2 += 1;
            break;
        case 3:
            nulo += 1;
            break;
        case 4:
            branco += 1;
            break;
        case 5:
            quebra = 0;
            break;
        default:
            cout << "Opção inválida! Tente novamente!" << endl;
            break;
        }
    cout << endl;
    cout << "Voto concluido!" << endl << endl;
    }
    if (quebra == 0){
        total = candidato1 + candidato2 + nulo + branco;
        if (total > 0){
        candidato1 = (candidato1/total) * 100;
        candidato2 = (candidato2/total) * 100;
        nulo = (nulo/total) * 100;
        branco = (branco/total) * 100;
        cout << "  - PORCENTAGEM DE VOTOS - " << endl
            <<  "  Jair Messias Bolsonaro: " << candidato1 << endl 
            <<  "  Fernando Haddad.......: " << candidato2 << endl
            <<  "  Votos em nulo.........: " << nulo << endl
            <<  "  Votos em branco.......: " <<  branco << endl; 
            }
        }   
    
    return 0;
}

