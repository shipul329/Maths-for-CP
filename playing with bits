

#include<bits/stdc++.h>

using namespace std;

void binary(int n)  /// binary representation of a number
{
    for(int i=10; i>=0; i--)
    {
        cout << ((n>>i)&1);
    }

    cout << '\n';
}

int32_t main()
{
   int x=15;

   binary(x);

   int i=3;  /// index;

   /// set bit or not
   if((x&(i<<i))!=0) /// left shift
   cout << "Set bit" << '\n';

   else cout << "Not set bit" << '\n';

   /// bit set
   binary(x | (1<<5));

   /// bit unset
   binary(x&(~(1<<3)));

   /// toggle 
   binary(x^(1<<2));


   /// count bitset

   int cnt=0;

   for(int i=31; i>=0; i--)
   {
       if((x&(1<<i)) != 0)
       cnt++;
   }

   cout << cnt << '\n';

   /// inbuilt function

   cout << __builtin_popcount(x) << '\n';

   /// for long long 

   cout << __builtin_popcountll(x) << '\n';
   
   return 0;

}
