#include <iostream>

using namespace std;
//>>
int main()
{
    int a,b;
    cout << "\nIngrese el primer número(A): ";
    cin >> a;
    cout << "\nIngrese el segundo número(B): ";
    cin >> b;

    cout << "\n A múltiplo de B?: " << ((a % b) == 0 ? "verdadero" : "falso") << endl;


    return 0;
}
