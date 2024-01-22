#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;
 
void solve(){
	int n,x=0,buff; cin>> n;
	for (int i = 0; i<n;i++)
	{
		cin >> buff;
		x+= buff;
	}
	int ans=0;
	for(int i = 1; i<=5; i++)
	{
		if((x+i)%(n+1) != 1)ans++;
	}
	cout <<ans;
	
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
 
