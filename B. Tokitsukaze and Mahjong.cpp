#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    int counter=0,flag=0;
    sort(arr,arr+3);
   // cout<<arr[0]<<arr[1]<<arr[2]<<endl;
    for(int i=0;i<2;i++)
    {
        string krr=arr[i];
        string frr=arr[i+1];
        if(frr[0]==krr[0]&&frr[1]==krr[1])counter++;
        int a=frr[0]-32,b=krr[0]-32;
       // cout<<frr[0]<<krr[0]<<endl;
       // cout<<a<<b<<endl;
        if(a==b+1&&frr[1]==krr[1])flag++;

        if(i==0)
        {
             string krr=arr[i];
        string frr=arr[i+2];
        if(frr[0]==krr[0]&&frr[1]==krr[1])counter++;
        int a=frr[0]-32,b=krr[0]-32;
       // cout<<frr[0]<<krr[0]<<endl;
       // cout<<a<<b<<endl;
        if(a==b+1&&frr[1]==krr[1])flag++;
        }
    }

    if(counter>=2||flag>=2)cout<<0<<endl;
    else if(counter==1||flag==1)cout<<1<<endl;
    else cout<<2<<endl;

}
