#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long a,b,c;
        cin>>a>>b>>c;

        if((a*1)%2==0&&(b*2)%2==0&&(c*3)%2==0)
        {
              cout<<"YES"<<endl;
        }
       else if(a>=1&&b>=1&&c>=1&&(a*1+b*2+c*3)%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
