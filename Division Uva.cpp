#include<bits/stdc++.h>
using namespace std;


bool check(int n,int k)
{
    int frr[10]={0};
    if(k<1e3)return false;
    if(k<1e4)frr[0]++;
    while(n>0)
    {
        int r=n%10;
        if(frr[r]>0)return false;
        frr[r]++;
        n/=10;
    }
    while(k>0)
    {
        int r=k%10;
        if(frr[r]>0)return false;
        frr[r]++;
        k/=10;
    }

    return true;
}

void solve(int n)
{
    vector<pair<int,int> >v;
    for(int i=1e4;i<1e5;i++)
    {
        if(i%n==0&&check(i,i/n))
        {
            v.push_back(make_pair(i/n,i));
        }
    }
    sort(v.begin(),v.end());

  //  cout<<v.size()<<endl;

    if(v.size()==0)
    {
        printf("There are no solutions for %d.\n",n);
       // printf("\n");
    }
    else
    {
       for(int i=0;i<v.size();i++)
       {
           printf("%d / %.5d = %d\n",v[i].second,v[i].first,n);
          // printf("\n");
       }
      // printf("\n");
    }
}

int main()
{
    int n;
    bool tr=false;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        if(!tr)tr=true;
        else printf("\n");
        solve(n);
        //cout<<endl;
    }
}
