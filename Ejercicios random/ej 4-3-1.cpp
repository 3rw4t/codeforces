#include <iostream>
using namespace std;

int main()
{
    int operacion,a,b;
    
    cout << "1. Suma\n2. Resta\n3. Multiplicación\n4. División\nIngrese el número de la operación que desea realizar: ";
    cin >> operacion;
    cout << "\nIngrese el primer operando: ";
    cin >> a;
    cout << "\nIngrese el segundo operando: ";
    cin >> b;
    if (operacion == 1)
    {
        cout << "\nResultado: " << a+b << endl;
    }
    if (operacion == 2)
    {
        cout << "\nResultado: " << a-b << endl;
    }
    if (operacion == 3)
    {
        cout << "\nResultado: " << a*b << endl;
    }
    if (operacion == 4)
    {
        if(b==0)
        {
            cout << "\nResultado: No se puede dividir por 0" <<endl;
        }
        else
        {
            cout << "\nResultado: " << a/b << endl;
        }
        
    }
    
    return 0;
}