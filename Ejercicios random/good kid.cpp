#include <bits/stdc++.h>
using namespace std;
//while(cin >> x;)
//headline / lectura de inputs sin saber cuantos son
int get_pos(int cantidad, int matriz[10]){
    int posicion, a;
    posicion = 0;
    for (a = 0; a < cantidad; a ++){
        posicion = (matriz[posicion] < matriz[a]) ? posicion :a ;
    }
    return posicion;
}
int main(){
    int acumulador,t,a,b, casos[10000][10], digitos[10000];
    cin >> t;
    for (a = 0; a < t; a++){
        cin >> digitos[a];
        for(b = 0; b < digitos[a]; b++){
            cin >> casos[a][b];
        }

    }

    for(a = 0; a < t ; a++){
        acumulador = 1;
        for (b = 0; b < digitos[a]; b++){
            if(b == get_pos(digitos [a], casos[a])){
                acumulador *= (casos[a][b] + 1);
            }else{
                acumulador *= casos[a][b];
            }
           
        }
        cout << acumulador << endl;
    }
    return 0;
}