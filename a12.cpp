#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    system ("cls");

    int n1,n2,nota;
    string res;

    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    nota = n1+n2;

    // (nota >=60) ? res = "Aprovado" : res = "Reprovado";
    res =(nota>=60) ? "Aprovado" : "Reprovado"; //valores de retorno
    cout << "\nSituacao do aluno: " << res << "\n";

    
    return 0;
}