#include <iostream>
using namespace std;

int w(int cantAtletas, int atletas[][2])
{
    int a,resultado;
    resultado = atletas[0][0];
    for (a = 1; a < cantAtletas; a++)
    {
        if((atletas[a][0] > atletas[0][0] || atletas[a][0] == atletas[0][0])&&(atletas[a][1] > atletas[0][1] || atletas[a][1] == atletas[0][1])){
            resultado =-1;
        }
    }
    return  resultado;
}


int main()
{
    int casos,a,b, cantAtletas[100], atletas[100][100][2] ;
    cin >> casos;
    for (a=0; a<casos; a++)
    {
        cin >> cantAtletas[a];
        for (b = 0; b<cantAtletas[a]; b++)
        {
            cin >> atletas[a][b][0];
            cin >> atletas[a][b][1];
        }
    }

    for(a = 0; a < casos; a++)
    {
        cout << w(cantAtletas[a], atletas[a]) << endl;
    }

    return 0;
}