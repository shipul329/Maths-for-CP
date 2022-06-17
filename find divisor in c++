/// even if we have a very big number it works preety quickly

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int32_t main()
{
    ll n;
    cin >> n;
    
    ll cnt=0;
    
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0){
        cnt++;   // i is a factor
        
        if(i != n/i)
        cnt++;     // (n/i) is also a factor
      }
        
    }
    
    cout << cnt << endl;
    
    return 0;
}

/// this code for find divisors from 1 to n.

void solve()
{
   int n;
   cin >> n;

   vector<int>v(n+1);

   for(int i=1; i<=n; i++)
   {
       for(int j=i; j<=n; j+=i)
       {
           v[j]++;  /// i is a divisor of j      
       }
   }

   for(int i=1; i<=n; i++)
   cout << v[i] << endl;
}

int32_t main()
{   
    solve();

    return 0;
}

/*  // fron 1 to 10 we get
1 
2 2
3   3
4 4   4
5       5
6 6 6     6
7           7
8 8   8       8
9   9           9
10 10       10          10
*/
