#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<LL> vi;



void solve(){
	LL buff,n,m; cin >> n >> m;
	vi a ;
	vi b;
	set<int> c;
	for (int i = 0; i< n; i++)
	{
		c.insert(i);
		cin >> buff;
		a.push_back(buff);
	} 
	for (int i = 0; i< m; i++)
	{
		cin >> buff;
		b.push_back(buff);
	} 
	//sort(a.begin(), a.end(), greater<LL>());
	
	//sort(a.begin(), a.end());
	LL ans= 0;
	LL max = -1, index =0;
	for(int i = 0; i< n ; i++)
	{
		max= 0;
		index = 0;
		for(auto x:c)
		{
			if(a[i] - b[x] > 0){
				if (a[i] - b[x]>=max)
				{
					max = a[i] - b[x];
					index = x;
				}
			}else{
				if (-a[i] + b[x]>=max)
				{
					max = -a[i] +b[x];
					index = x;
				}
			}
		}
		ans += max;
		c.erase(index);
		
		
	}
		
	cout << ans << '\n';
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

