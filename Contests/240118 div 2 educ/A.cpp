#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;



void solve(){
	int n; cin >> n;
	string a,b,c; cin >> a >> b >> c;
	int ans = 1;
	while(ans && n--){
		if(c[n] != a[n] && c[n] != b[n]) ans = 0;
	}
	cout << (ans ? "NO" : "YES") << '\n';
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

