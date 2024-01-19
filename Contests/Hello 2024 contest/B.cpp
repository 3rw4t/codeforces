#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int t;

void solve(){
	LL n, sum = 0;
	cin >> n;
	while(n--)
	{
		char buff;
		cin >> buff;
		if (buff == '-'){
			sum -= 1;
		}else
		{
			sum+=1;
		}
	}
	cout << abs(sum) << '\n';
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

