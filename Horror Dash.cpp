#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    int counter=0;
    getchar();
    while(q--)
    {
        string str;
    getline(cin,str);
    stringstream ss;
    ss<<str;
     int mx=0;
    int val;
    while(ss>>val)
    {
        mx=max(val,mx);
    }
    printf("Case %d: %d\n",++counter,mx);
    }
}
