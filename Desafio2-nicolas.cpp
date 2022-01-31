#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char op;
    float a, b;

    cout << "Qual operação você deseja?" << endl;
    cin >> op;
    
    cout << "Insira o primeiro número:" << endl;
    cin >> a;

    cout << "Insira o segundo número:" << endl;
    cin >> b;

    cout << "O resultado é: " << (a + b);
    
    return 0;
}