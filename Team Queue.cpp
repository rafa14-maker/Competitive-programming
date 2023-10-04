#include<bits/stdc++.h>
using namespace std;

vector<int>adj[2000];
vector<int>v;
int cnt;

void re_front()
{
    for(int i=0;i<v.size()-1;i++)v[i]=v[i+1];
    v.pop_back();
}

void re_size(int a,int n)
{
    v.push_back(1);
    for(int i=v.size()-1;i>n;i++)
    {
        v[i]=v[i-1];
    }
    v[n]=a;
}


int bin(int n)
{
    for(int i=0;i<cnt;i++)
    {
        int l=0,r=adj[i].size()-1;
        while(l<=r)
        {
            int mid=(l+r)/2;
            if(adj[i][mid]==n)
            {
                return i;
            }
            else if(adj[i][mid]>n)r=mid-1;
            else l=mid+1;
        }
    }
}

void enq(int p,int k)
{
   int flag=-1;
    for(int i=0;i<v.size();i++)
    {
        if(bin(v[i])==k)
        {
           flag=i;
        }
    }
  if(flag==-1)  v.push_back(p);
  else re_size(p,flag);
}



int main()
{
    int yo=0;
    while(1)
    {
        memset(adj,0,sizeof adj);
       // memset(adj,0,sizeof frr);

        int n;

        scanf("%d",&n);

        if(n==0)break;

        cnt=0;

        for(int i=0;i<n;i++)
        {
            int k;
            cin>>k;
            for(int j=0;j<k;j++)
            {
                int a;
                cin>>a;
                adj[cnt].push_back(a);
               // frr[cnt].push_back(0);
            }
            sort(adj[cnt].begin(),adj[cnt].end());
            cnt++;
        }

        string s;
        printf("Scenario #%d\n",++yo);
  //  vector<int>q;
        while(1)
        {
            cin>>s;
            if(s=="STOP")
            {
                break;
            }

            if(s=="DEQUEUE")
            {
               printf("%d\n",v[0]);
           //  q.push_back(v[0]);
             if(v.size()>0)  re_front();
            }
            else if(s=="ENQUEUE")
            {
                int p;
                cin>>p;
              if(v.size()>0){  int k=bin(p);
                enq(p,k);}
                else v.push_back(p);
            }
            //for(int i=0;i<v.size();i++)cout<<v[i]<<" ";cout<<endl;
        }
        cout<<"\n";
    }
}
