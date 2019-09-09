/* 
 * File:   main.cpp
 * Author: fredaum
 *
 * Created on 20 de agosto de 2019, 12:12
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
int contadorOtimo = 0, contadorBom = 0, contadorRegular = 0, contadorRuim = 0, menu = 1;
float percentOtimo = 0, percentBom = 0, percentRegular = 0, percentRuim = 0, 
        idade = -1, totalEspectadores = 0, totalIdades = 0;

cout << "PESQUISA DE SATISFACAO.\n";
cout << "-------------------||------------------\n";
while (menu != 0)
{
while (idade < 0)
{
cout << "Informe sua idade:\n";
cin >> idade;
if (idade < 0)
cout << "Idade incorreta! Tente novamente.";
}

totalIdades = totalIdades + idade;
idade = -1;

cout << "Qual sua opnião sobre o filme?\n";
cout << "[1] - OTIMO\n";
cout << "[2] - BOM\n";
cout << "[3] - REGULAR\n";
cout << "[4] - RUIM\n";
cin >> menu;
switch (menu)
{
case 1:
contadorOtimo += 1;
break;
case 2:
contadorBom += 1;
break;
case 3:
contadorRegular += 1;
break;
case 4:
contadorRuim += 1;
break;
default:
break;
}
totalEspectadores = totalEspectadores + 1;
cout << "Deseja cadastrar uma nova opnião?\n";
cout << "[1] - SIM\n";
cout << "[0] - NÃO\n";
cin >> menu;
}

cout << "-----------------------------------------\n";
percentOtimo = (contadorOtimo / totalEspectadores) * 100;
percentBom = (contadorBom / totalEspectadores) * 100;
percentRegular = (contadorRegular / totalEspectadores) * 100;
percentRuim = (contadorRuim / totalEspectadores) * 100;

cout << "Quantidade de pessoas que responderam a pesquisa: ....... " << totalEspectadores << "\n";
cout << "Media de idade das pessoas que responderam a pesquisa: .. " << totalIdades / totalEspectadores << "\n";
cout << "Acharam ótimo: .......................................... " << percentOtimo << "%\n";
cout << "Acharam bom: ............................................ " << percentBom << "%\n";
cout << "Acharam regular: ........................................ " << percentRegular << "%\n";
cout << "Acharam ruim: ........................................... " << percentRuim << "%\n";

    return 0;
}

