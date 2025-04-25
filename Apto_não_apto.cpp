/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    float nota;
    int freq;
    
    cout << "Digite a nota: ";
    cin >> nota;
    
    cout << "Media: " << nota << endl;
    
    bool aprovadopornota = (nota >= 7);
    
    cout << boolalpha;
    cout << "Aprovado por nota? " << aprovadopornota << endl;
     
     cout << "Digite a frequencia do aluno (em %): ";
     cin >> freq;
     
     bool frequenciaAdequada = (freq >= 80);
    if (frequenciaAdequada) {
     cout << "frequencia adequada!" << endl;
     } else {
         cout << "frequencia insuficiente!" << endl;
     }
    if (aprovadopornota && frequenciaAdequada) {
        cout << "Aluno apto a receber certificação." << endl;
    } else {
        cout << "Aluno não apto a receber certificação." << endl;
        
    }
    

    return 0;
}