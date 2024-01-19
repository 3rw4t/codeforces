#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,b) for(int i= a; i <= b; i++)
int main(){
	int t;
	cin >>t;
	REP(i, 1, t)
	{
			int n;
			string s, res;
			cin >> n >> s;
			
			while(!s.empty()){
					int x;
					if(s.back() == 'a' || s.back()== 'e'){
						x = 2;
					}else{
						x = 3;
					}
				while(x){
					res.push_back(s.back());
					s.pop_back();
					x--;
				}
				res.push_back('.');
			}
			res.pop_back();
			reverse(res.begin(), res.end());
			cout << res << '\n';
	}
	
}
