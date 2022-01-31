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

    switch (op)
    {
    case '+':
        cout << "Insira o segundo número:" << endl;
        cin >> b;
        cout << "O resultado é: " << (a+b) << endl;
        break;
    case '-':
        cout << "Insira o segundo número:" << endl;
        cin >> b;
        cout << "O resultado é: " << (a-b) << endl;
        break;
    case '*':
        cout << "Insira o segundo número:" << endl;
        cin >> b;
        cout << "O resultado é: " << (a*b) << endl;
        break;
    case '/':
        cout << "Insira o segundo número:" << endl;
        cin >> b;
        if (b != 0)
            cout << "O resultado é: " << (a/b) << endl;
        else
            cout << "Não é possível divisão por zero!" << endl;
        break;
    default:
        break;
    }
    
    return 0;
}