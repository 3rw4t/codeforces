#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<LL> vi;
 
 
	set<int> memo1,memo2;
	
	LL m[300001] = {},z[300001]= {};
LL dp2(int n)
{
	
	if(n== 0)return 0;
	if(memo2.find(n) == memo2.end()){
		m[n] = dp2(n-1) + n ;
		memo2.insert(n);
	}
	 
	return m[n];
	
}	
LL dp1(int n)
{
	if(n== 0)return 0;
	if(memo1.find(n) == memo1.end()){
		z[n] = dp1(n-1) + dp2(n-1);
		memo1.insert(n);
	}
	
	return z[n];
	
}
 
 
void solve(){
	
	int n; cin >> n;
	int a[n]; for (int i = 0; i < n; i++) cin >> a[i];
	sort(a , a +n , greater<int>());
	LL ans = 0, racha = 1;
	int i=0;
	for( i = 0; i < n - 2; i++) 
	{
		if(a[i] == a[i+1]) 
		{
			racha++;
				
		}else{
			ans+= ((racha*(racha -1))/2)*(n-i-2) + dp1(racha );
			racha = 1;
		}
	
	} 
	ans+= dp1(racha);
	cout << ans << '\n';
	
	
}
 
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	z[0]=0;
	m[0]= 0;
	memo1.insert(0);
	memo2.insert(0);
	int t;
	cin >> t;
	while(t--)
	{
		solve();
	}
	return 0;
}
 