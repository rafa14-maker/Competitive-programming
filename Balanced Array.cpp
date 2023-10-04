#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        if((n/2)%2==0)
        {
            cout<<"YES"<<endl;

            for(int i=2,j=1;j<=n/2;j++,i+=2)
            {
                cout<<i<<" ";
            }
            int counter=0;
            int k=(n/2)/2;
            for(int i=2,j=1;j<=n/2;j++,i+=2)
            {
                if(counter==0)cout<<i-1<<" ";
                else cout<<i+1<<" ";
                if(j==k)counter++;
            }
            cout<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
