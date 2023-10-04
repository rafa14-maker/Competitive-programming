#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1000];

    for(int i=0;i<=1000;i++)
    {
        arr[i]=1;
    }
    for(int i=2;i<=1000;i++)
    {
        for(int p=i;p<=1000;p+=i)
        {
            arr[p]++;
        }
    }



   for(int i=1;i<=1000;i++)
   {
       cout<<arr[i]<<" "<<i<<endl;   }
}
