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
    int frequencia;
    cout<<"Digite a frequencia do aluno (0 a 100): ";
    cin >> frequencia;
    
    
    bool naoSuspenso = frequencia >= 75;
    bool Suspenso = !naoSuspenso;
    
    cout << boolalpha << Suspenso << endl;
    

    return 0;
}