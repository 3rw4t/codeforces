#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;
 
void solve(){
	int n,x; cin >> n >>x;
	char a[n+1],prev;
	for (int i = 1;i<=n;i++)
	{
		cin >> a[i];
	}
	
	for (int i = 1; i<= x; i++){
		prev = a[1];
		for(int j = 2; j <= n;j++){
			if(prev == 'B' && a[j] == 'G'){
				prev = 'G';
				a[j] = 'B';
				a[j-1] = 'G';
			}else prev = a[j];
			}
	}
	for(int i =1; i<=n;i++)
	{
		cout << a[i];
		}
}
 
int main()
{
	//test
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
 
