#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int>vi;



void solve(){
	int pairs[5][3] = {};
	for(int i = 0; i< 4; i++)
	{
		cin >> pairs[i][0] >> pairs[i][1];
	}
	int x = pairs[0][0];
	int a = 0,b= 0;
	for(int i = 1; i< 4; i++)
	{
		if(pairs[i][0] == x) a = abs(pairs[0][1] - pairs[i][1]);
	}
	
	x = pairs[0][1];
	for(int i = 1; i< 4; i++)
	{
		if(pairs[i][1] == x) b = abs(pairs[0][0] - pairs[i][0]);
	}
	cout << a * b<< '\n';
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

