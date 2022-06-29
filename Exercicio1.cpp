#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(void) {
    int indice=13, soma=0 , k=0;

    while(k<indice){
        k++;
        soma+=k;
    }

    cout << soma;
return 0;
}
