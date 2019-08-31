
/* 
 * File:   main.cpp
 * Author: fredao
 *
 * Created on 8 de agosto de 2019, 21:55
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    int idade;
    cout << "Informe a sua idade:";
    cin >> idade;
    if (idade<5)
        cout << "Idade abaixo do permitido!" << endl;
    else if (idade>5 && idade<7)
        cout << "Infantil A" << endl;
    else if (idade>8 && idade<10)
        cout << "Infantil B" << endl;
    else if (idade>11 && idade<13)
        cout << "Juvenil A" << endl;
    else if (idade>14 && idade<17)
        cout << "Juvenil B" << endl;
    else
        cout << "Senior" << endl;
    return 0;
}

