#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;
 
void solve(){
	int n; 
	cin >> n;
	int ans[3] = {};
	int buff;
	for (int i = 0; i< n*3; i++)
	{
		cin >> buff;
		ans[i%3] += buff; 
	}
	cout << ((ans[0]|ans[1]|ans[2])? "NO": "YES");		
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
 
