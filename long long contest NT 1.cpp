#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,a,b,n;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            cout<<">"<<endl;
        }
        else if(a<b)
        {
            cout<<"<"<<endl;
        }
        else if(a==b)
        {
            cout<<"="<<endl;
        }
    }

    return 0;

}
