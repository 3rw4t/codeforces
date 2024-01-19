#include <iostream>

using namespace std;

int main()
{
    //< >
    int a,b,c;
    cout << "\nIngrese el primer número(a): ";
    cin >> a;
    cout << "\nIngrese el segundo número(b): ";
    cin >> b;
    cout << "\nIngrese el tercer número(c): ";
    cin >> c;

    cout << "El mayor es: " << ((a > b >c ) ? a : ((b>c) ? b : c)) <<endl;
    
    return 0;
}
