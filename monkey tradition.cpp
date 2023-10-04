#include<bits/stdc++.h>
using namespace std;
#define max1 100005

int arr[max1];
pair<int,int>frr[41];

int main()
{
    int t,p=0;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>frr[i].first>>frr[i].second;
        }
        for(int i=0;i<max1;i++)arr[i]=0;

        for(int i=0;i<n;i++)
        {
            for(int j=frr[i].first+frr[i].second;j<max1;j+=frr[i].first)
            {
                arr[j]++;
            }
        }
        int counter=0;
        for(int i=0;i<max1;i++)
        {
            if(arr[i]==n)
            {
                printf("Case %d: %d\n",++p,i);
                counter++;
                break;
            }
        }
        if(counter==0)
        {
            printf("Case %d: Impossible\n",++p);
        }
    }
}
