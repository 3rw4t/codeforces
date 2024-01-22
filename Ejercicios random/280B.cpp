#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;
 

void solve(){
	LL a, count = 0,ans=0; cin >>a;
	if(floor(sqrt(a)) * floor(sqrt(a)) == a && 3 < a) {
		int i=2;
		while((i*i) <= sqrt(a) && !count)
		{
			if((int)sqrt(a)%i == 0)count++;
			i++;
		}
		if(!count) ans=1;
	}
	cout << (ans? "YES": "NO")<< '\n';
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
	//cout << sqrt(999966000289);
	return 0;
}
 
