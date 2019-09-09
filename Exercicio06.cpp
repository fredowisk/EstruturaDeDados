/* 
 * File:   main.cpp
 * Author: fredaum
 *
 * Created on 26 de agosto de 2019, 21:18
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {

    int i =0;
    double temperatura[12];
    double media = 0, menor = 0, maior = 0, menorAnual= 0;
    for(i=1; i<=12; i++){
        cout << "Informe a temperatura média do " << i << "º mês: " << endl;
        cin >> temperatura[i];
        media += temperatura[i];
        if (temperatura[i]<menor)
            menor = temperatura[i];
        else if(temperatura[i]>maior)
            maior = temperatura[i];
    }
    media /= 12;
    for(i=1; i<=12; i++){
        if(temperatura[i]<media)
            menorAnual += 1;
    }
    cout << "Menor temperatura do ano: " << menor << endl <<
            "Maior temperatura do ano: " << maior << endl <<
            "Temperatura média anual: " << media << endl << 
            "Número de meses em que a temperatura foi inferior a media anual: " << menorAnual << endl;
    return 0;
}

