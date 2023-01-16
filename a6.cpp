#include <iostream>
using namespace std;

int n1,n2; // Variáveis Globais

int main() {

    int n3,n4; //Variáveis locais
    int res;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res = (n1+n2+n3+n4) - 11;
    cout << "Soma de todas as variaveis: " << res;

    return 0;
}