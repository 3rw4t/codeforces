#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;
 
void solve(){
	//test
	int a,b,n; 
	for(int i =1; i<=5;i++)
	{
		for(int j=1; j<=5; j++)
		{
			cin >>n;
			if(n)
			{
				a = i;
				b=j;
			}
		}
	}
	cout << abs(3 - a) + abs(3-b);
}
 
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//int t;
	//cin >> t;
	//while(t--)
	//{
		solve();
	//}
	return 0;
}
 
