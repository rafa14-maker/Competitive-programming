#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,b,j;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        int counter=0;

        for(j=2;j<=b/2;j++)
        {
            if(j*a==b)
            {
                cout<<j<<endl;
                counter++;
                break;
            }
        }
        if(counter==0)
        {
            cout<<"NO SOLUTION"<<endl;
            continue;
        }

    }
}
