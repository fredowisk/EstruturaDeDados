/* 
 * File:   main.cpp
 * Author: fredao
 *
 * Created on 9 de agosto de 2019, 17:09
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    for (int num = 1; num <=500; num++){
        if(num % 5 == 0)
            cout << " " << num << endl;
    }
    return 0;
}

