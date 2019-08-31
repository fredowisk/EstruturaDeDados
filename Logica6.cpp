/* 
 * File:   main.cpp
 * Author: fredao
 *
 * Created on 9 de agosto de 2019, 16:58
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    for (int num = 1; num<=20; num++) {
        int quadrado = num * num;
        cout << "O quadrado do número: " << num << " é: " << quadrado << endl;
    }
    return 0;
}

