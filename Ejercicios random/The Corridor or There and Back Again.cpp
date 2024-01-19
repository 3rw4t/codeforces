#include <bits/stdc++.h>
using namespace std;

int calcularK(int trampas, int datos[100][2])
{
    int a,k, buff;

    for (a= 0; a<trampas; a++)
    {
        buff = datos[a][0] + (datos[a][1]-1)/2;

        if(a == 0 || buff < k)
        {
            k = buff;
        } 
    }

    return k;
}

int main()
{
    int a,b,traps[1000], casos,trampa[1000][100][2];

    cin >> casos;
    for (a = 0; a < casos; a++ )
    {
        cin >> traps[a];
        for (b=0; b<traps[a]; b++)
        {
            cin >> trampa[a][b][0];
            cin >> trampa[a][b][1];
        }
    }

    for (a=0; a< casos; a++)
    {
        cout << calcularK(traps[a], trampa[a]) << endl;
    }
    
    return 0;
}