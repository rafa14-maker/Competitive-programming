#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,k,t,i,c;

    cin>>t;

    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c;

            k=b+c-1;

            if(k>a)
            {
                if(k%a==0)
                {
                    cout<<a<<endl;
                }
                else
                {
                    cout<<k%a<<endl;
                }
            }
            else
            {
                cout<<k<<endl;
            }

        }

}
