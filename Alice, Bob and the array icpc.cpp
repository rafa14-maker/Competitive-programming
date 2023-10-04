#include<bits/stdc++.h>
using namespace std;

int test;

void solve()
{
    int n;
    cin>>n;
    int arr[n+5];
    bool tr=true;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)tr=false;
    }
    if(tr)
    {
        int mn= -1e8+7;
        for(int i=0;i<n;i++)
        {
            mn = max(mn,arr[i]);
        }
        cout<<mn<<" "<<0<<endl;
        return ;
    }

    int sum=0;
    vector<int>v;

    while(arr[n-1]==-1)n--;
    int i=0;
    while(arr[i]==-1)i++;

    for(int j=i;j<n;j++)
    {
        if(arr[j]>0)
        {
            sum+=arr[j];
            v.push_back(j);
        }
    }
    printf("Case %d: ",++test);
    cout<<sum<<" ";

    int kp=0,pk=0;

    int idx=0;

    for(int j=i;j<n;j++)
    {
        if(arr[j]<0)
        {
            if(j>v[idx])
            {
                kp+=abs(v[idx]-j);
                idx++;
            }
        }
    }

    idx=v.size()-1;

    for(int j=0;j<n;j++)
    {
        if(arr[j]<0)
        {
            if(j<v[idx])
            {
                pk+=abs(v[idx]-j);
                idx--;
            }
        }
    }

    cout<<min(kp,pk)<<endl;

}

int main()
{
    int q;
    scanf("%d",&q);
    while(q--)solve();
}

/*

6
3
12 2 -1
5
12 3 -1 -2 0
3
-3 0 -2
5
0 2 1 4 -3
7
-2 4 -3 2 1 0 -1
4
-2 -1 2 0

//  icpc20pre_team_0542
 // EOTUZZVSYQWI

*/
