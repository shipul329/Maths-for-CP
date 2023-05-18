#include<bits/stdc++.h>

using namespace std;

int32_t main()
{
   char ch='B';

   cout << char(ch|(1<<5)) << '\n';  /// do lower  'b', in binary 5th bit is always 1 for lower letter

   cout << char(ch & (~(1 << 5))) << '\n'; /// do upper 'B'
   
   /// lower to upper
   cout << char('a'&'_') << '\n'; /// and with underscore, always work for lower letter, it's same for upper letter
   
   /// upper to lower
   cout << char('S'|' ') << nn; /// or with space, 
   
   return 0;
}
