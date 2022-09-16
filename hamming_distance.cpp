#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
    ll n, m;
    cin >> n >> m;
    
    ll ans=n^m;
    
    ll cnt=0;
    
    //cout << __builtin_popcount(ans) << '\n';
    
    while(ans>0)
    {
        cnt+=ans&1;
        
        ans>>=1;
    }
    
    cout << cnt << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin >> t;
    
    while(t--)
    {
        solve();
    }
    
    return 0;
}
