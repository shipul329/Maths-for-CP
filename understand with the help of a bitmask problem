/*
Consider this problem: There are N≤5000 workers. Each worker is available during some days of this month (which has 30 days). For each worker, 
you are given a set of numbers, each from interval [1,30], representing his/her availability. You need to assign an important project to two workers
but they will be able to work on the project only when they are both available. Find two workers that are best for the job — maximize the number of days
when both these workers are available. Or, you can find all workers that are best for the job.

You can compute the intersection of two workers (two sets) in O(30) by using e.g. two pointers for two sorted sequences. 
Doing that for every pair of workers is O(N2⋅30), slightly too slow. */

#include<bits/stdc++.h>

using namespace std;

#define nn '\n'

void solve()
{
   int n;
   cin >> n;

   vector<int>masks(n, 0);

   for(int i=0; i<n; i++)
   {
      int nm;
      cin >> nm;

      int mask=0;

      for(int j=0; j<nm; j++)
      {
        int day;
        cin >> day;

        mask=(mask|(1<<day)); /// make set bit
      }

      masks[i]=mask;
   }

   int maxdays=0;

   int p1=-1, p2=-1;

   vector<pair<int, int> > v, v2;

    for(int i=0; i<n; i++)
   {
       for(int j=i+1; j<n; j++)
       {
          int mil=(masks[i] & masks[j]);

          int cdays=__builtin_popcount(mil);  /// count days

          maxdays=max(maxdays, cdays); /// find maximum days for suitable
       }
   }

   for(int i=0; i<n; i++)
   {
       for(int j=i+1; j<n; j++)
       {
          int mil=(masks[i] & masks[j]);

          int cdays=__builtin_popcount(mil);

          if(cdays == maxdays)
          {
              v.pb({i, j});
          }
       }
   }

   cout << maxdays << nn;

   cout << v.size() << nn;  /// all workers that are best

   for(int i=0; i<v.size(); i++)
   cout << v[i].first << " " << v[i].second << nn;
}

int32_t main()
{
    solve();

    return 0;
}
