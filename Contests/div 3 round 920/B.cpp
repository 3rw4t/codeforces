#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;



void solve(){
	int n; cin >>n;
	string s,f; cin >> s >> f;
	int a=0, b=0, count = 0, faltas = 0;
	
	for(int i = 0; i< n; i++){
		if(s[i] == '1'){a++;}
		if(f[i] == '1'){b++;}
		
		if(f[i] == '1' && s[i] == '0'){faltas++;}
	}
	//cout << a << ' '<< b <<' '<< count<< '\n'; 
	if(a < b) cout << faltas;
	else cout << (a - b) + faltas;
	cout << '\n';
	
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}

