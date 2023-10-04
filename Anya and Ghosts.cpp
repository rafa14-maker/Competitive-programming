#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,t,r;
    cin>>m>>t>>r;
    int arr[305]={0};

    for(int i=1;i<=m;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            cout<<-1<<endl;
            return 0;
        }
        arr[a]=1;
    }

    int counter=0;

    for(int i=2;i<=300;i++)
    {
        if(arr[i]!=0)
        {
            counter+=r;
            for(int j=i-1;j<i+t-1;j++)
            {
                if(arr[j]==1)arr[j]=0;
            }
        }
    }
    cout<<counter<<endl;
}
