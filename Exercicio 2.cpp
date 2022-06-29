#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(void) {
    int num;
    int ultimo=1, penultimo=0, temp, aux;
    bool existe = false;
    
    cout << "Informe o numero: ";
    cin >> num;

    while(ultimo+penultimo<num){      
        temp = penultimo;
        penultimo = ultimo;
        ultimo = ultimo + temp;

        aux++;

        if(ultimo+penultimo == num){
            cout << "O numero existe no fibonnaci\n";
            existe = true;
            break;
        }
    }

    if(existe == false){
        cout << "O numero nao existe\n";
    }

    
return 0;
}
