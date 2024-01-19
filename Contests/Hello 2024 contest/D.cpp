#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int t;

void solve(){
	LL n,m, buff,sum=0;
	cin >>n;
	m=n;
	while(n--)
	{
		cin >> buff;
		sum += buff;
	}
	if((m == 2 && sum ==1) || (sum == m))
	{
		cout << "YES" << '\n';
	}else{
		cout << "NO" << '\n';
	}
}
int main()
{
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}

