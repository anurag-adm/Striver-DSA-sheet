#include <bits/stdc++.h>
using namespace std;

// print from 1 to n (Backtracking)
void print_1_to_n_bt(int n)
{
   if (n == 0)
   {
      return;
   }
   print_1_to_n_bt(n - 1);
   cout << n << " ";
   return;
}

// print from 1 to n
void print_1_to_n(int n)
{
   static int i = 0;
   i++;
   cout << i << " ";
   if (i == n) 
      return;
   print_1_to_n(n);
   return;
}

// print from n to 1
void print_n_to_1(int n){
   if(n==0) return;
   cout<<n<<" ";
   print_n_to_1(n-1);
   return; 
}

// print from n to 1 Backtracking
void print_n_to_1_bt(int n){
   static int i=0;
   if(n==0) return;
   print_n_to_1_bt(n-1);
   i++;
   cout<<i<<" ";
   
}


int main()
{
   print_n_to_1_bt(5);

   return 0;
}