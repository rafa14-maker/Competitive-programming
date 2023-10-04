#include<bits/stdc++.h>
using namespace std;

int arr[105];

int main()
{
   arr[1]=1;
   int k=1;
   for(int i=2;i<=100;i++)
   {
       arr[i]=4*k+arr[i-1];
       k++;
   }

   int n;
   cin>>n;
   cout<<arr[n];
}
