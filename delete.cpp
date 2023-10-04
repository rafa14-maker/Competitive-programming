#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[20],i,j,n,num,pos;

    cout<<"enter size of array :";
    cin>>n;

    cout<<"enter array elements :";
    for(i=0;i<n;i++)
    {

        cin>>arr[i];
    }
    cout<<"enter postion:";
    cin>>pos;


     for(i=pos-1;i<n;i++)
     {

         arr[i]=arr[i+1];
     }
     n--;

     for(i=0;i<n;i++)
    {

        cout<<arr[i];
    }

}
