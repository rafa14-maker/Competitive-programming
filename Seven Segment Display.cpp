#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        if(n==2)cout<<1<<endl;
        else if(n==3)cout<<7<<endl;
        else if(n>3)
        {
            if(n%2==1)
            {
                n/=2;
                cout<<7;
                n--;
                while(n--)cout<<1;
                cout<<endl;
            }
            else
            {
                n/=2;
                while(n--)cout<<1;
                cout<<endl;
            }
        }
    }
}
