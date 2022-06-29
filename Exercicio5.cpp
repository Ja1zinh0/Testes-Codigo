#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
 
int main()
{
    string palavra = "teste";

    int tam = palavra.length();

    for (int i = 0; i < tam / 2; i++)
        swap(palavra[i], palavra[tam - i - 1]);

    cout << palavra;
    return 0;
}