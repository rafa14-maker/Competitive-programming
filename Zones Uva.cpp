
#include<bits/stdc++.h>
using namespace std;

int arr[25];
int frr[25];
vector<int>adj[25];
int n,k,q;
vector<int>v;
int mx;

int Set(int n,int pos)
{
    return (n | (1<<pos));
}
bool Check(int n,int pos)
{
    return (n & (1<<pos));
}

void cal(int mk)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(Check(mk,i))sum+=arr[i];
    }
    for(int i=0;i<q;i++)
    {
        int  tr=0;
        for(int j=0;j<adj[i].size();j++)
        {
            int a=adj[i][j];
            a--;
            if(Check(mk,a))tr++;
        }
        if(tr>1)
        {
            sum-=frr[i];
         //  if(tr%2==1)sum-=frr[i];
         //  else sum+=frr[i];
        }
    }
    if(sum>mx)
    {
        mx=sum;
        v.clear();
        for(int i=0;i<n;i++)
         {
            if(Check(mk,i))v.push_back(i+1);
         }
    }
    else if(sum==mx)
    {
        vector<int>kp;
          for(int i=0;i<n;i++)
         {
            if(Check(mk,i))kp.push_back(i+1);
         }
         for(int i=0;i<v.size();i++)
         {
             if(v[i]<kp[i])break;
             else if(kp[i]>v[i])
             {
                v.clear();
             for(int i=0;i<n;i++)
            {
            if(Check(mk,i))v.push_back(i+1);
               }
               break;
             }
         }
    }
}


void f(int pos,int mk,int counter)
{
    if(counter>k)return;
     if(pos==n)
     {
         if(counter!=k)return;
         else
         {
             cal(mk);
             return ;
         }
     }
     f(pos+1,Set(mk,pos),counter+1);
     f(pos+1,mk,counter);
}

void solve(int test)
{
    v.clear();
    mx=0;
    for(int i=0;i<n;i++)cin>>arr[i];
    //int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        int p;
        cin>>p;
        adj[i].clear();
        for(int j=0;j<p;j++)
        {
            int a;
            cin>>a;
            adj[i].push_back(a);
        }
        cin>>frr[i];
    }
    f(0,0,0);
    printf("Case Number %d\n",test);
    printf("Number of Customers: %d\n",mx);
    printf("Location recommended: ");
    for(int i=0;i<v.size();i++)
    {
        if(i==v.size()-1)cout<<v[i]<<endl;
        else cout<<v[i]<<" ";

    }
}

int main()
{
    int test=0;
    while(1)
    {

        cin>>n>>k;
        if(n==0&&k==0)break;
        solve(++test);
        cout<<endl;
    }
}
/*
4 3
674184 230421 496636 396595
3
3 1 2 3 207065
4 1 2 3 4 28026
2 2 4 137036
0 0
*/
