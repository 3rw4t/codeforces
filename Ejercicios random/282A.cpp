#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;
 
void solve(){
	int n,x=0;cin >>n;
	string s;
	for(int i = 0; i< n;i++){
		cin >> s;
		if(s[1] == '-')x--;
		else x++;
		}
	cout <<x;
	
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
 
