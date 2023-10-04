#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m = max(a,b)-min(a,b);
    if(m>min(a,b)){cout<<"Impossible"<<endl;return 0;}
    a-=m;
    b-=m;
    if((c-a)+(c-b)==c)
    {
        cout<<m<<" "<<c-a<<" "<<c-b;
    }
    else
    {
        cout<<"Impossible"<<endl;
    }
}
