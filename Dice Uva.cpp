#include<bits/stdc++.h>
using namespace std;

string arr,frr;

bool check()
{
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]!=frr[i])
        {
            return false;
        }
    }
    return true;
}

void rootx()
{
    char tmp=arr[2];
    arr[2]=arr[5];
    arr[5]=arr[4];
    arr[4]=arr[3];
    arr[3]=tmp;
}

void rootz()
{
    char tmp=arr[0];
    arr[0]=arr[2];
    arr[2]=arr[1];
    arr[1]=arr[4];
    arr[4]=tmp;
}

void solve()
{
    cin>>arr>>frr;
    bool same;
    for(int i=0;i<6;i++)
    {
        same=check();
        if(same)break;
        else if(i<4)
        {
            rootx();
        }
        else if(i==4)
        {
            rootz();
            rootx();
        }
        else
        {
            rootx();
            rootx();
        }
        for(int j=0;j<4;j++)
        {
            same=check();
            if(same)break;
            else rootz();
        }
        if(same)break;
    }
    if(same)cout<<"Equal"<<endl;
    else cout<<"Not Equal"<<endl;
}

int main()
{
    int q;
    cin>>q;
    while(q--)solve();
}
