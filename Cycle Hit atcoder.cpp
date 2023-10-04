#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr[5];
    for(int i=0;i<4;i++)cin>>arr[i];

    int cnt=0;

    for(int i=0;i<4;i++)
    {
        if(arr[i]=="H")cnt+=1;
        if(arr[i]=="2B")cnt+=2;
        if(arr[i]=="3B")cnt+=3;
        if(arr[i]=="HR")cnt+=4;
    }
    if(cnt==10)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
