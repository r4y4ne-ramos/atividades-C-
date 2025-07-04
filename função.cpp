/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
 using namespace std;
 int somarNumero (int numero1, int numero2){
     int resultado;
     resultado = numero1+numero2;
     return resultado;
 }
int main(){
 
 int num1,num2, somar_numero;
 cout << "Digite o primeiro numero: ";
 cin >> num1;
 

  cout << "Digite o segundo numero: ";
 cin >> num2;
 
 somar_numero = somarNumero(num1,num2);
 
 cout << "\n"  << "total da soma é: " << somar_numero;
    
    return 0;
}