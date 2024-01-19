#include <iostream>
using namespace std;

int main()
{
    int a,b,x,y,o,p,resultado;
    resultado = 0;
    cout << "\nIngrese a de (a,b): ";
    cin >> a;
    cout << "\nIngrese b de (a,b): ";
    cin >> b;
    cout << "\nIngrese x de (x,y): ";
    cin >> x;
    cout << "\nIngrese y de (x,y): ";
    cin >> y;
    cout << "\nIngrese o de (o,p): ";
    cin >> o;
    cout << "\nIngrese p de (o,p): ";
    cin >> p;


    if (a<x)
    {
        resultado += (((a < o )&& (o< x)) ? 1 : 0);
    }
    else
    {
        resultado += (((x < o )&& (o< a)) ? 1 : 0);
    }

    if (b<y)
    {
        resultado += ((b < p && p < y) ? 1 : 0);
    }
    else
    {
        resultado += ((y < p && p< b) ? 1 : 0);
    }

    if (resultado == 2)
    {
        cout << "El punto (o,p) está dentro del rectángulo formado por (a,b) y (x,y)";
    }
    else
    {
        cout << "El punto (o,p) NO está dentro del rectángulo formado por (a,b) y (x,y)";
    }
    
     
    
    return 0;
}