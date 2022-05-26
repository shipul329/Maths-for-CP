* How to quantify the efficiency of a programme?
* Memory
* Time taken
* WHy do we care?

=> It's usually use to quantify the efficiency of a programme.

What is efficiency?
=> It's about how well use our resources> How much can we get out of our resources that we have.

What are the resources here?
=> One is memory. How much extra memory we are going to take and how much extra is the programme going to run.

Why do we care?
=> For example, hard disk and all. They cost something. So we are buying somethin for memory. and we don't have infinite memory.
We have to buy it so it's expensive. That's why memory is important.

Time taken why it's important?
=> Let's suppose, if we load a Facebook page, Google search or something if these take 3 seconds we won't wait. It's actually a bad
customer experience and that's one of the reason time taken is also important. That's why we care about it.

How do we quantify these?
=> Efficiency of a programme it's quantified in terms of it's input, ilke for specific amount of input, how mcuh time it will take.

Let's first know about Time Complexity-
Let's try to understand with the help of a simple question. You are given n numberes and you have to calculate the sum of n numbers.
How will you do it? You will keep an initial variable. You will add n(i), n(i+i), n(i+2) .... and so on for each of those variables. 
So how many step to get the final sum, it's gonaa take n steps.

int sum(vector<int>v)
{
     int ans=0;
     for(int i=0; i<v.size(); i++)
     {  
         ans+=v[i]; /// here we are doing n additions(n basic operation) and each basic operation takes 1 unit of time.
     }
     
     return ans;     /// ans is there only extra variable it's constant. 
}

so the time complexity of this problem is O(n)
and space complexity is O(1)

*** You are given two arrays A, B of size N. Now for all i, j you have to calculate sum (Ai, Bj).

/// iterative approach (approach 1)

int sum(vector<int>A, vector<int>B)
 {
     int ans=0;
     int n=A.size();

     for(int i=0; i<n; i++)
     {
         for(int j=0; j<n; j++)
         {
             ans+=A[i]*B[j]; /// total number of basic operation ni*nj
         }
     }

     return ans;
 }
 
 ** so the time complexity is O(n*n) 
 ** and extra memory we have used so the space complexity is O(1)
 
 /// approach 2
 
 int sum(vector<int>A, vector<int>B)
 {
     int ans=0;

     int n=A.size();

     int product[n][n]; /// we allocate here extra (n*n)

     for(int i=0; i<n; i++)  /// basically we don't need to use this 
     {                       /// this is stupied approach cuz this is not gonna make much efficient
         for(int j=0; j<n; j++)
         {
             product[i][j]=A[i]*B[i];  /// operations are n*n
         }
     }

     for(int i=0; i<n; i++)
     {
         for(int j=0; j<n; j++)
         {
             ans+=product[i][j]; /// operations are n*n
         }
     }

     return ans;
 }
 
 ** so the time complexity is O((n*n)+(n*n)) -> O(2(n*n)) which is O(n*n)
 ** and the space complexity also O(n*n)
 
 /// approach 3 
 
 int sum(vector<int>A, vector<int>B)
 {
     int asum=0, bsum=0;
     int n=A.size();

     for(int i=0; i<n; i++)
     asum+=A[i];  /// n operations 

     for(int i=0; i<n; i++)
     bsum+=B[i]; /// n operations 

     return asum*bsum;
 }

 so the time complexity is O(n+n) -> O(2n) which is O(n)
 and the space complexity also O(1+1) which is O(1)
 
 for the same problem if we compare approach 1, approach 2 and approach 3 then approach 3 is much better. that's why we should care about it.
