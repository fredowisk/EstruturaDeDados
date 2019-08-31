/* 
 * File:   main.cpp
 * Author: fredaum
 *
 * Created on 24 de agosto de 2019, 16:31
 */

#include <iostream>

using namespace std;

/*
 * 
 */
void Programinha() {
    double alunos[20], notas = 0, media =0, calculador = 0;
    int contador = 0;
    int i = 0;
    for (i = 0;i<20;i++){
        cout << "Informe a nota do " << i+1 << "º aluno:" << endl;
        cin >> notas;
        alunos[i] = notas;
        calculador += notas;
    }
    media = calculador / i;
    for(i=0; i<20; i++){
        if(alunos[i]>media)
            contador += 1;
    }
    cout << "Média da turma: " << media << endl <<
            "Quantidade de alunos acima da media: " << contador<< endl;
}

int main(int argc, char** argv) {
    Programinha();
    return 0;
}



