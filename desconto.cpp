/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
using namespace std;
int main()
{
    float valorCompra;
    bool ganhouDesconto;
    
    cout << "Digite o valor da compra: R$";
    cin >> valorCompra;
    
    ganhouDesconto = valorCompra > 100.0;
    
    
    cout << "Ganhou desconto; "  << (ganhouDesconto ? "Verdadeiro" : "falso") << endl;

    return 0;
}