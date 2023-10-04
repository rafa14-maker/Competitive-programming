#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int counter=0;
        int flag=0;

        int k=a,l=b,p=c;

        while(l>=1&&p>=2)
        {
            flag+=3;
            l--;
            p-=2;
        }
         while(k>=1&&l>=2)
        {
            flag+=3;
            k--;
            l-=2;
        }

        k=a,l=b,p=c;

        while(l>=1&&p>=2)
        {
            counter+=3;
            l--;
            p-=2;
        }

        while(k>=1&&l>=2)
        {
            counter+=3;
            k--;
            l-=2;
        }

        cout<<max(flag,counter)<<endl;
    }
}
