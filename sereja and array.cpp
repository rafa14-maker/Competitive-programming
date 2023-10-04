#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long arr[100005], n,m,k,a,b,counter=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    while(m--)
    {
        cin>>k;
        if(k==1)
        {
           cin>>a>>b;
            arr[a]=b-counter;
        }
          else  if(k==2)
            {
                cin>>a;
               counter+=a;
            }
          else  if(k==3)
            {
                cin>>a;
                cout<<arr[a]+counter<<endl;
            }
    }
}
