#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,m,n,l,k,o,i,p,y;

    cin>>y;

    for(i=0;i<y;i++)
    {
        cin>>m>>n>>o>>p>>k;
        a=((m*60)+(k*60)+n);
        b=((o*60)+p);
        cout<<a-b<<endl;
    }
}
