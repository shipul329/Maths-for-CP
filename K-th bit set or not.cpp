

#include<bits/stdc++.h>

using namespace std;

int32_t main()
{
   int n, k;
   cin >> n >> k;

   if(n&(1<<(k-1)))
   cout << "SET" << nn;

   else cout << "NO" << nn;
   
   return 0;

}
