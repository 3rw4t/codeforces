#include <bits/stdc++.h>
using namespace std;
#define REP(i, a, b) for(int i=a; i<= b; i++)


int main()
{
	string x;
	int n;
	cin >> n;
	REP(i,1,n){
		cin >>x;
		if (x.size() > 10){
				cout << x[0] << x.size() - 2 << x[x.size() - 1];
		}else{
				cout << x;
		}
		cout << '\n';
	}
	return 0;
}
