#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;
 
void solve(){
	cout << "TEST";
	int n; 
	cin >> n;
	int a[1005][1005];
	int ans[n+1] ;
	for(int i = 1; i<= n; i++)
	{
		ans[i] = ~ans[i];
		for (int j = 1; j<= n; i++)
		{
			cin >> a[i][j];
		}
	}

	for(int i = 1	; i<= n; i++)
	{	
		for (int j = 1; j<= n && j != i; i++)
		{
			ans[i] = ans[i] & a[i][j] & a[j][i];
		}
	}

	for(int i = 1; i<= n; i++)
	{

		cout << ans[i] <<' ';
	}	
}
 
int main()
{

	int t;
	cin >> t;
	while(t--)
	{
		cout << "TEST";
		solve();
	}
	return 0;
}
 
