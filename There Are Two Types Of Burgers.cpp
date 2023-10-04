#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int b,p,f;
        cin>>b>>p>>f;
        int h,c;
        cin>>h>>c;
        int sum=0,flag=0;
        int k=b,l=f,j=p;
        while(k>1&&l>0)
        {
            k-=2;
            l--;
            sum+=c;
        }
        while(k>1&&j>0)
        {
            k-=2;
            j--;
            sum+=h;
        }
        k=b,l=f,j=p;
        while(k>1&&j>0)
        {
            k-=2;
            j--;
        flag+=h;
        }
        while(k>1&&l>0)
        {
            k-=2;
            l--;
             flag+=c;
        }
        cout<<max(flag,sum)<<endl;
    }
}
