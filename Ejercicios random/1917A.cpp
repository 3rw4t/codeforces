#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i = a; i <= b ; i++)
typedef vector<int> vi;	
int main(){
	int n,m,buff;
	cin >> n;
	REP(i, 1,n)
	{
		int cero = 0;
		unsigned int contador = 0;
		vi a;
		cin >> m;
		REP(j,1,m){
			cin >> buff;
			a.push_back(buff);
			if(buff == 0){
					cero = 1;
			}
			if(buff < 0){
				contador++;
			}
		}
		
		if(cero || contador % 2 != 0){
			cout << 0;
		}else{
			contador = 0;
			while(a[contador] < 0 && contador < a.size() - 1){
					contador++;
			}
			cout << 1 << '\n' << contador + 1 << ' ' << 0;
		}
		cout << '\n';
		
		
	}
	return 0;
	
	
	
}
