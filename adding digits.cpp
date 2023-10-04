#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,c;
    cin>>a>>b>>c;

    for(int i=0;i<10;i++)
    {
        if((a*10+i)%b==0)
        {
            cout<<a<<i;
            for(int j=0;j<c-1;j++)
            {
                cout<<0;
            }
            return 0;
        }
    }
    printf("-1\n");
}
