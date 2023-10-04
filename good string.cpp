#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr,frr;
    cin>>arr;

    int counter=0;

    for(int i=0;i<arr.size()-1;i+=2)
    {
       if(arr[i]!=arr[i+1])
       {
           frr+=arr[i];
           frr+=arr[i+1];
       }
       else
       {
           i--;
       }
    }

    cout<<arr.size()-frr.size()<<endl<<frr<<endl;

}
