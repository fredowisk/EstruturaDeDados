/* 
 * Autores: Frederico Roberto Parreira
 *          Milton Carlos Katoo
 * Created on 3 de outubro de 2019, 20:34
 */

#include <iostream>

using namespace std;
const int qtd = 5; // variavel constante global qtd para o tamanho dos vetores.
//Função que empilha o vetor de 5 posições.
void empilhar(int vetor[qtd]){//Recebendo o parametro vetor criado no main.
    cout << "Empilhando...\n";
    for(int i =0; i<qtd; i++){// for de 5 posições, que incrementa.
        vetor[i] = i; // recebendo a variavel I, para facilitar na passagem de valor.
        cout << "Posição " << i << " :" << vetor[i] << "\n";
    } // escrevendo a posição e o valor do vetor na tela.
        cout<< "Pilha cheia!\n\n";
}

void desempilhar(int vetor[qtd]) {
    cout << "Desempilhando...\n";
    for(int i = qtd - 1; i>-1; i--){ // for que decrementa.
        vetor[i] = NULL; // deixando as posições nulas.
        cout << "Posição " << i << " :" << vetor[i] << "\n";
    } // imprimindo a posição do vetor e a exclusão do valor.
        cout<< "Pilha vazia!\n\n";
}

int main(int argc, char** argv) {
    int vetor[qtd]; // criando vetor de 5 posições.
    int opc = 0, continua = 1; // variavel opc para o menu, e continua para o while.
    while(continua !=0){
    cout << "Empilhar - 1 \nDesempilhar - 2\nSair - 0\n"; // opções.
    cin >> opc; //recebendo o valor digitado pelo usuário.
    if(opc != 1 && opc != 2 && opc != 0) //If que impede o usuário de um valor indisponível.
        cout << "Opção inválida!\n";
    else if (opc == 1) // if que chama a função que empilha.
        empilhar(vetor);
    else if (opc == 2) // if que chama a função que exclui.
    desempilhar(vetor);
    else { // else que finaliza o programa.
        continua = 0;
        cout << "Saindo...";
    }
    }
    return 0; // return do main.
} // fim.

