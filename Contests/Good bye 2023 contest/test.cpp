#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for (int i = a; i <=b ; i++)

int main()
{
	int	t, n, k,x, buff, notgreater;
	cin >> t;
	REP(i, 1, t){
		x=1;
		notgreater = 1;
		cin >> n >> k;
		
		REP(j, 1, n){
			cin >> buff;
			if (x <= 2023){
				x *= buff;
			}else{
				notgreater= 0;
			}
		}
		
		if(2023 % x == 0 && notgreater)e
		{
			cout << "YES" << endl;
			REP (l, 1, k){
				if (l == 1){
					cout << 2023 / x;
				}else{	
					cout << 1;
				}
				cout << endl;
			}
		}else{
			cout << "NO" << endl;
		
		}
	}
	
	
	return 0;
}
