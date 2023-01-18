#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
    int n1, n2, res;
    char opc;

    inicio:
    system ("cls");

    cout << "Digite a nota 1 do aluno: ";
    cin >> n1;
    cout << "Digite a nota 2 do aluno: ";
    cin >> n2;
    res = (n1+n2)/2;


    cout << "A media do aluno e: " << res;
    if (res>=6) {
        cout << "\nAprovado";

    }else if (4 <res<= 5.9) {
        cout << "\nRecuperacao";

    } else {
        cout<< "\nReprovado";
    }
    cout << "\nDeseja digitar outras notas?[s/n]: \n";
    cin >> opc;

    if(opc == 's' or opc == 'S'){
        goto inicio;
        
    }

    return 0;
}