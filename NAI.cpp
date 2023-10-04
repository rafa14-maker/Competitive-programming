#include<bits/stdc++.h>
using namespace std;

int main()
{
    double p,l,r;
    cin>>l>>r>>p;
    double a=l,b=r;
    if(a>b)swap(a,b);
    if((b*p)/100.00<=a)
    {
        cout<<"Ambidextrous"<<endl;
        return 0;
    }
    if(l>r)cout<<"Left-handed"<<endl;
    else cout<<"Right-handed"<<endl;
}
