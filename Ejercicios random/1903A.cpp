#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<LL> vi;
 
 

 
 
void solve(){
	int k,n; cin >> n >>k;
	int a[105] = {};
	int increasing = 1;
	for (int i = 1; i<= n; i++)
	{
		cin >> a[i];
		if( a[i-1]>a[i]) increasing = 0;
	}
	int ans = 1;
	cout << ( k!=1 || increasing ? "YES": "NO")<< '\n';



	
	
}
 
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}
 