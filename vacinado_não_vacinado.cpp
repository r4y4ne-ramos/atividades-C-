/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int vacinado;
    int idade;
    
    cout << "Você esta vacinado? (1 para sim, 0 para não): ";
    cin >> vacinado;
    
    
    cout<<"Qual sua idade? ";
    cin >> idade;
    
    bool mascaraparaObrigatoria = (!vacinado || idade < 12);
    
    cout << boolalpha << "Uso de mascara obrigatorio: " << mascaraparaObrigatoria << endl;

    return 0;
}