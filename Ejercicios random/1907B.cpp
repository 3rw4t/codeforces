#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef vector<int> vi;

void solve()
{
	//minus97 122 mayus 65 90
	string s; cin >> s;

	int ans[s.size()] = {};

	vi minus = {} , mayus = {};

	for(int i = 0; i < s.size() ; i++)
	{
		if( s[i] == 'b' && minus.size() > 0) { minus.pop_back();}
		else if(  s[i] == 'B' && mayus.size() > 0) {mayus.pop_back();}
		else if ( 97 <=  s[i] && s[i] <= 122 && s[i] != 'b' ){ minus.push_back(i);}
		else if ( 65 <= s[i] && s[i] <= 90 && s[i] != 'B') { mayus.push_back(i);}
	}

	for(int i = 0; i<minus.size(); i++){
		ans[minus[i]] = 1;
	}
	for(int i = 0; i<mayus.size(); i++){
		ans[mayus[i]] = 1;
	}
	
	for(int i = 0; i<s.size(); i++){
		if(ans[i]) cout << s[i];
	}
	cout << '\n';
	
}

int main(){
	int t;
	cin >> t;
	while(t--){
	
	    solve();
	}
	
	
	return 0;
}
