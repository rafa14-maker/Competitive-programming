#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,counter=0;
    string arr;
    cin>>n;
    cin>>arr;

    for(i=0;arr.size();i++)
    {
       if(arr[i]>0)
       {
           i+=arr[i];
       }
       counter++;
     }

     cout<<counter<<endl;
}
