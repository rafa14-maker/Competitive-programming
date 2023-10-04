#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
   // cin>>q;
    scanf("%d",&q);
    while(q--)
    {
        int n,k;
        //cin>>n>>k;
        scanf("%d",&n);scanf("%d",&k);
        int arr[n+5];
        for(int i=0;i<n;i++)scanf("%d",&arr[i]);
        int frr[n+5]={0};
        for(int i=1;i<n-1;i++)
        {
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])frr[i]=1;
        }
        int idx=1e7,counter=0;

        vector<pair<int,int> >v;

        for(int i=1;i<k-1;i++)
        {
            if(frr[i]==1)counter++;
        }
      v.push_back(make_pair(counter+1,1));
        for(int i=1,j=k-1;i<n,j<n;j++,i++)
        {
            if(frr[i]==1)counter--;
             if(frr[j]==1)counter++;
            v.push_back(make_pair(counter+1,i+1));
        }
       sort(v.begin(),v.end());
       reverse(v.begin(),v.end());
       for(int i=0;i<v.size();i++)
       {
           if(v[i].first==v[0].first)idx=min(idx,v[i].second);
           else break;
       }
      if(v[0].first>0) printf("%d %d\n",v[0].first,idx);
      else printf("1 1\n");
    }
}
