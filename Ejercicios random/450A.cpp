#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;
 
void solve(){
	int a,b,n;cin >> a>> b >> n;
	int divisible=1;
	
	while(divisible && n--){
		int i = 10;
		int divisible1 = 0;
		int divisor = -1;
		while(!divisible1 && i--){
			if((a*10 + i -1 ) %b == 0){
				divisor = i-1;
				divisible = 1;
			}
			
			a = a*10 + divisor;
		}
	}
}
 
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;	
	cin >> t;
	while(t--)
	{
		cout << t;
		//solve();
	}
	return 0;
}
 
