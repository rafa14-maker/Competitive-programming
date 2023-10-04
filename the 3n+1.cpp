#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int m;
        cin>>m;
        cout<<n<<" "<<m<<" ";
        if(n>m)swap(n,m);
        int counter=0,k=0;
        for(int i=n;i<=m;i++)
        {
            int j=i,counter=0;
            while(j>1)
            {
                counter++;
                if(j%2==1)j=3*j+1;
                else j/=2;
               // cout<<i<<endl;
            }
            k=max(k,counter);
        }
        cout<<k+1<<endl;
    }
}
