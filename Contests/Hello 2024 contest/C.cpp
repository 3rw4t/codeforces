#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int t;
typedef vector<int> vi;

int p(vi a){
	int sum=0;
	for (int i = 0; i <(int) a.size()-1; i++)
	{
		if(a[i] < a[i+1]){
			sum++;
		}
	}
	return sum;
}

void solve(){
	LL n, buff;
	vi a,b,c,d;
	
	cin >> n;
	while(n--)
	{
		cin >> buff;
		a.push_back(buff);
		
	}
	for (int i = 0; i <(int) a.size() -1; i++){
		if(a[i]<a[i+1]){
		b.push_back(a[i]);
		}else{
		c.push_back(a[i]);
		}
		
	}
	cout << p(b) + p(c)<<endl;
	
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

