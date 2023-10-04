#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int frr[5]={0};

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='o')frr[0]++;
        else if(arr[i]=='n')frr[1]++;
        else if(arr[i]=='e')frr[2]++;
        else if(arr[i]=='z')frr[3]++;
        else if(arr[i]=='r')frr[4]++;
    }

    while(frr[0]>0&&frr[1]>0&&frr[2]>0)
    {
        cout<<1<<" ";
        frr[0]--;
        frr[1]--;
        frr[2]--;
    }
    while(frr[3]>0&&frr[2]>0&&frr[4]>0&&frr[0]>0)
    {
        cout<<0<<" ";
        frr[0]--;
        frr[4]--;
        frr[2]--;
        frr[3]--;
    }

}
