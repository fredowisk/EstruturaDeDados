#include <iostream>
#include <list>
#include <iterator>
#include <string>
//imports...
using namespace std;
//Função que recebe uma list de String com nome Func.
void Imprimir (list<string>& func) { 
list<string>::const_iterator elemento; // Iterator com nome de elemento.
if(func.empty()) //Se a lista estiver vazia...
{
cout << "Lista vazia\n";
} else { //Senão...
elemento = func.begin(); //Iterator recebe a primeira posição da lista.
cout << "Lista em ordem de cadastro: \n";
while (elemento != func.end()) { // Se o iterator for diferente da ultima posição da lista.
	cout << *elemento << " "; //Imprimindo o ponteiro do iterator.
	elemento++; // Aumentando o iterator em +1.
}
	cout << endl;
func.sort(); // Ordenando a lista em ordem alfabetica.
elemento = func.begin(); // Iterator recebendo a primeira posição da lista.
cout << "Lista ordenada: \n";
while( elemento != func.end()) {
	cout << *elemento << " ";
	elemento++;
}
	cout << endl;
func.reverse(); // Revertendo a lista
elemento = func.begin();
cout << "Lista reversa: \n";
while( elemento != func.end()) {
	cout << *elemento << " ";
	elemento++;
}
 	cout << "\nQuantidade de funcionários cadastrados: " << func.size() << endl; // Func.size pega o tamanho total da lista.
}
}

void Cadastrar(list<string>& func) { // Função que cadastra e recebe uma list de string com nome de funcionario.
int qtd = 0; // variavel que recebera a quantidade de funcionarios.
if(func.empty())
{
cout << "Informe quantos funcionários deseja cadastrar: ";
cin>> qtd; // recebendo a quantidade de funcionários.
string nome; // variavel que recebe o nome.
for(int i = 0; i<qtd; i++){
cout << "Informe o nome do " << i+1 << "º funcionário:\n";
cin >> nome; // recebendo o nome do funcionário.
func.push_back(nome); // colocando o nome na ultima posição da lista.
}
} else {
	cout << "A lista está cheia!\n";
}
}

int main(){
list<string> func; // criando a lista com nome de func.
Cadastrar(func); // passando a lista para o função cadastro.
Imprimir(func); // passando a lista para a função imprimir.
return 0;
}
