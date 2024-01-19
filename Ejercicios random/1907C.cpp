    #include <bits/stdc++.h>
    using namespace std;
    typedef long long LL;
    typedef vector<int> vi;


    void solve()
    {
        int a[26] = {}; 
        int n;
        string s;
        cin >> n >> s;
        //97 122
        for (int i = 0; i< n; i++)
        {
            a[s[i] - 97]++;
        }
        int m = 0;
        for( int i = 0; i< 26 ; i++){
            m = max(m, a[i]);
        }

        if (m - (n - m) > 0)
        {
            cout << m - (n - m);
        }else{
            cout << n%2;
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
