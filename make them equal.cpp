#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int k=abs(a-b);
        if(k%c==0)cout<<k/c<<endl;
        else cout<<-1<<endl;
    }
}
