    #include <bits/stdc++.h>
    using namespace std;

    void solve()
    {
        string s; cin >> s;
        int a,b;
        a = (int) s[0];
        b = (int) s[1];
        // a = 91 1 = 49
        for (int i = 0; i< 8; i++)
        {
            for ( int j = 0; j< 8; j++)
            {
                char c1,c2;
                c1= i+97;
                c2= j+ 49;
                if((c1 != s[0] || c2 != s[1]) && (c1 == s[0] || c2 == s[1])) cout << c1 << c2 << '\n'; 

            }
        }
    
    }

    int main(){
        int t;
        cin >> t;
        while(t--){
        
        solve();
        }
        
        
        return 0;
    }
