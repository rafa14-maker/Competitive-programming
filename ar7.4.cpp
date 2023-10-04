#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,a,i,b;

    cin>>n>>m>>a>>b;

    for(i=1;;i++)
    {
        if(i%2==0)
        {
            n-=b;
        }
        else{
            m-=a;
        }
        if(n==0)
        {
            cout<<"Second"<<endl;
            return 0;
        }
        else if(m==0)
        {
            cout<<"First"<<endl;
            return 0;
        }
    }


}
