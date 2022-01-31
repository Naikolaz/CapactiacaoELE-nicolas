#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char op, p;
    float a, b;

    cout << "Operações disponíveis: " << endl;
    cout << "Soma (a+b)" << endl;
    cout << "Subtração (a-b)" << endl;
    cout << "Multiplicação (a*b)" << endl;
    cout << "Divisão (a/b)" << endl;
    cout << "Exponencial (a^b)" << endl;
    cout << "Resto (a%b)" << endl;
    cout << "Raíz quadrada (r a)" << endl;
    cout << "Fatorial (a!)" << endl;

    inicio:

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
    case '^':
        cout << "Insira o segundo número:" << endl;
        cin >> b;
        cout << "O resultado é: " << pow(a, b) << endl;
        break;
    case '%':
        int resto;
        cout << "Insira o segundo número:" << endl;
        cin >> b;
        if (b != 0)
            cout << "O resultado é: " << (int(a) % int(b)) << endl;
        else
            cout << "Não é possível divisão por zero!" << endl;
        break;
    case 'r':
        if (a >= 0)
            cout << "O resultado é: " << pow(a, 0.5) << endl;
        else 
            cout << "Não é possível extrair raíz negativa!" << endl; 
        break;
    case '!':
        if (a+1 >= 0)
            cout << "O resultado é: " << tgamma(a+1) << endl;
        else
            cout << "Não existe fatorial de número negativo!" << endl;
        break;
    default:
        break;
    }
    
    cout << "Deseja realizar outra operação (s/n)? " << endl;
    cin >> p;

    if (p == 's'){
        goto inicio;
    }
    
    cout << "Até logo! (:";
    
    return 0;
}