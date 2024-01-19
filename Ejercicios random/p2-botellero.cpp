//#include <bits/stdc++.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void MuestraMatriz(int matriz[][6]){
    int a,b;
    for (a = 0; a<6;a++){
        for(b=0; b<6;b++){
            cout << matriz[a][b] << " ";
        }
        cout << endl;
    }
};

bool CumpleTOC(int matriz[][6])
{
    int a,b, acumulador;
    bool cumple = true;
    for(a=0; a<6;a++){
        acumulador=0;

        for(b=0; b<6;b++){
            acumulador += matriz[a][b];
        }

        if (acumulador != 2){
            cumple = false;
        }
    }
    for(a=0; a<6;a++){
        acumulador=0;

        for(b=0; b<6;b++){
            acumulador += matriz[b][a];
        }

        if (acumulador != 2){
            cumple = false;
        }
    }
    acumulador = 0;
    for (a = 0; a<6;a++){
        acumulador += matriz[a][a];
    }

    if (acumulador !=2){
        cumple = false;
    }
    acumulador=0;
    for(a=0; a<6; a++){
        acumulador += matriz[a][5 - a];
    }

    if(acumulador !=2){
        cumple = false;
    }
    return cumple;
};

void CargaBotellas(int matriz[][6]){
    // 0: vacio, 1: botella
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++)
        {
            matriz[i][j]=0;
        }
    }
    for(int i=1; i<=12; i++){
        int aux= rand()%36;
        matriz[aux/6][aux%6]=1; }
}

int main(){
    int matriz[100][6][6], casos,i;
    cin >> casos;

    for(i = 0; i<casos; i++){
        srand(time(NULL));
        CargaBotellas(matriz[casos]);
        MuestraMatriz(matriz[casos]);   
    }
    for(i=0; i<casos;i++){
        cout << ((CumpleTOC(matriz[i])) ? "TOC" : "CUAC" ) << endl;
    }
    
    return 0;
}