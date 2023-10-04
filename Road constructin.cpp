#include<bits/stdc++.h>
using namespace std;

int arr[10005];

int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        arr[a]++;
        arr[b]++;
            }
            int counter;
            cout<<n-1<<endl;
            for(int i=1;i<=n;i++)
            {
                if(arr[i]==0)
                {
                   counter=i;
                   break;
                }
            }
            for(int i=1;i<=n;i++)
            {
                if(i!=counter)
                {
                    cout<<counter<<" "<<i<<endl;
                }
            }
}
