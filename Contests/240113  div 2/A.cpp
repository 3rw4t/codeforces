#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;



void solve(){
	int n; cin >> n;
	LL low = 0,ans=0;
	set<LL> d;
	LL upper = numeric_limits<long long>::max();
	while(n--){
		LL a,b; cin >> a >> b;
		
		if(a == 1 && b > low) low = b;
		if(a == 2 && b< upper) upper = b;
		if(a == 3) d.insert(b);
	}
	if (low <= upper)
	{
		for (auto x: d){
		if (x <= upper && x >= low) ans--;}
		
		cout << (ans+  upper - low+1) << '\n';

	}else{
		cout << 0 << '\n';
	}
	
	
	
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}

