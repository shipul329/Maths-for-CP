/// check numbers prime or not from 1 to n.

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve()
{
   int n;
   cin >> n;

   vector<int>pr(n+1, 1);

   pr[1]=0;

   for(int i=2; i<=n; i++)
   {
       if(!pr[i]) continue;

       for(int j=i*i; j<=n; j+=i)
       pr[j]=0;
   }

   for(int i=2; i<=n; i++)
   cout << i << " " << pr[i] << endl;
}

int32_t main()
{
    solve();

    return 0;
}
