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
    int idade;
    bool PodeVotar, Podedirigir;

    cout << "Digite sua idade: ";
    cin >> idade;

    PodeVotar = idade >= 16;
    Podedirigir = idade >= 18;
   
   cout << "Pode Votar: " << (PodeVotar ? "verdadeiro" : "falso") << endl;
   cout << "Pode dirigir: " << (Podedirigir ?  "verdadeiro" : "falso" ) << endl;
   
    return 0;
}
