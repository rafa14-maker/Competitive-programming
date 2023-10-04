#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr;
    cin>>arr;
    int flag=0;
    for(int i=1;i<=5;i++)
    {
       cin>>frr;
        if(arr[0]==frr[0]||arr[1]==frr[1])
        {
            flag++;
        }
    }
    if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    else cout<<"YES"<<endl;
}
