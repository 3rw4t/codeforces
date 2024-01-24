	//https://codeforces.com/problemset/problem/1913/A
	
	#include <bits/stdc++.h>
	using namespace std;
	typedef long long LL;
	typedef vector<int> vi;
	 
	void solve(){
		string s,s1,s2; cin >> s;
		//for(int i = 1; i<(int)s.size();i++){
		int n = s.size();
		int i = n;
		int ans= 0;
		//int l0= 0;
		while(1 < i-- && !ans){
			s2 = s.substr(i, n-1);
			s1 = s.substr(0, i);
			//cout  << '_'<< s1 << ' '<< s2 << ' ' << '\n';
			
			int count =0;
			while(s2[0] == '0' && count+1+i < n ){
				count++;
				s1 = s.substr(0, i+count);
				s2 = s.substr(i+count, n-1);
			} 
			if(stoi(s1) < stoi(s2))ans++;
			
		}
		if(!ans) cout << -1 << '\n';
		else cout << s1 << ' ' << s2 << '\n'; 
			
			
	}

	 
	int main()
	{
		//test
		ios::sync_with_stdio(0);
		cin.tie(0);
		int t;
		cin >> t;
		while(t--)
		{
			solve();
		}
		return 0;
	}
	 
