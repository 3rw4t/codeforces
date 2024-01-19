#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;



void solve(){
	LL n,f,a,b; cin >> n >> f >> a >> b;
	LL m[n +1] = {};

	for(int i = 1; i<= n ; i++)
	{
		cin >>m[i];
	}
	//int i = 1;
	//for(int i = 0; i<= n ; i++)
	//{
		//cout << m[i] << ' ';
	//}
	int i = 1;
	
	while(f>0 && n--)
	{
		if((m[i] - m[i-1])*a >= b)
			{f-= b;}
			else{
				f -= (m[i] - m[i-1])*a;}
		//f -= max ((m[i] - m[i-1])*a, b);
		//cout << f << '\n';
		//cout<< m[i] << ' ';
		i++;
	}
	if(f>0)cout << "YES";
	else cout << "NO";
	cout << '\n';
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

