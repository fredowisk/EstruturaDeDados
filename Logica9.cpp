
#include <iostream>
using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
int contador = 0, codigoAlunos[10], codigoBaixo = 0, codigoAlto = 0;
float menorAluno = 0, maiorAluno = 0, alturaAlunos[10];
cout << "INFORME O CÓDIGO E A ALTURA DE 10 ALUNOS.\n";
cout << "-------------------||-----------------\n";
while (contador < 10)
{
int codigoAluno = contador + 1;
cout << "Informe a altura do aluno do código: " << codigoAluno << "\n";
codigoAlunos[contador] = contador;
cin >> alturaAlunos[contador];
if ((menorAluno == 0) || (alturaAlunos[contador] < menorAluno))
{
codigoBaixo = codigoAluno;
menorAluno = alturaAlunos[contador];
}
if ((maiorAluno == 0) || (alturaAlunos[contador] > maiorAluno))
{
codigoAlto = codigoAluno;
maiorAluno = alturaAlunos[contador];
}

contador = contador + 1;
}

cout << "O menor aluno é: " << codigoBaixo << " e possui " << menorAluno << " cm de altura.\n";
cout << "O maior aluno é: " << codigoAlto << " e possui " << maiorAluno << " cm de altura.\n";
return 0;
}

