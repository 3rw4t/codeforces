#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int t;

void solve(){
	LL a,b;
	cin >> a >> b;
	LL sum = a+ b;
	if(sum %2 == 0 )
	{
		cout << "Bob";
	}else{
		cout << "Alice";
	}
	cout << '\n';		
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
