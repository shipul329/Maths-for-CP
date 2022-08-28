/// find prime numbers from given range

#include<bits/stdc++.h>

using namespace std;

const int LIMIT_N=1000000001;
const int SQRT = sqrt(LIMIT_N)+1;

int main()
{
    int t;
    cout << "Number of test cases : ";
    cin >> t;

    while(t--)
    {
        unordered_map<int,int> composites; /// unordered map use korsi karon eita dara choto theke boro orthat n to m nirdhesh kore;

        int n,m,cnt=0;

        cout << "Enter the range : ";

        cin >> n >> m;

        for(int i=2; i<=SQRT; i++)
        {
            int start = max(2*i, ((n+i-1)/i)*i); /// jodi range e lower 2 theke start hoy taile to somossa nai,,tahole 2*i better;
            /// but eita jodi random kono number hoy tahole sothik songkhata ke pawyar jonno ei method use kora hoy.
            /// karon amader oi range er moddhe composite number gulo ke mark korte hobe;
            for(int j= start; j<=m; j=j+i)
            {
                composites[j]=1; /// range er moddhe sob composite gula mark hobe ba rakhe ditasi;
            }
        }

        for(int i=n; i<=m; i++) /// amara soja range er shuru theke start korsi ar sob prime gulo ke print korsi.
            /// count function ta i koto bar ase seita check kore karon range er vitor obossoi i ekta thakbe so count == 0 hoite hobe
            /// ar composite e jehetu i == 1 rakhe disi tai i == 1 hoile to seita prime so bad jabe;
        {
            if((composites.count(i)==0) && (i!=1))
               {
                   cout << i << " ";
                   cnt++; /// count total number of primes
               }
        }
        
        cout << endl << cnt << endl;
    }

    return 0;
}
