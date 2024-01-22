#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;
 

void solve(){
	int a,b,n;cin>>a>>b>>n;
	int divisible =0;
	int i = 10;
	while(!divisible && i--){
		if((a* 10+ i) %b == 0)
		{
			divisible = 1;
		}
	}
	if(divisible){
		a = a*10+i;
		cout << a;
		n--;
		for(i = 0; i<n; i++)cout << 0;
		
			
	}else{
		cout << -1;
	}
	
}
 
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	//int t;	
	//cin >> t;
	//while(t--)
	//{
		//cout << t;
		solve();
	//}
	return 0;
}
 
