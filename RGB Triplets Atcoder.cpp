#include<bits/stdc++.h>
using namespace std;

vector<int>adj[50000];


int main()
{
    int n;
   scanf("%d",&n);
    string s;
    cin>>s;
    vector<int>a;
    vector<int>b;
    vector<int>c;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='R')a.push_back(i+1);
        else if(s[i]=='B')b.push_back(i+1);
        else if(s[i]=='G')c.push_back(i+1);
    }
  /*   for(int i=0;i<b.size();i++)
     {
         for(int j=0;j<c.size();j++)
         {
            int n=b[i];
            int m=c[j];
            adj[n].push_back(m);
           // adj[m].push_back(n);
         }
     }
      for(int i=0;i<a.size();i++)
     {
         for(int j=0;j<b.size();j++)
         {
            int n=a[i];
            int m=b[j];
            adj[n].push_back(m);
          //  adj[m].push_back(n);
         }
     }
     int sum=0;
    /* for(int i=0;i<a.size();i++)
     {
         int p=a[i];
         for(int j=0;j<adj[p].size();j++)
         {
             int q=adj[p][j];
           //  if(p==q)continue;
             for(int k=0;k<adj[q].size();k++)
             {
                  int  r=adj[q][k];
               //  if(p==r||q==r)continue;d

              //   cout<<p<<" "<<q<<" "<<r<<endl;
              int a1,b1,c1;
              a1=min(p,min(q,r));
              c1=max(p,max(q,r));
              if(a1!=p&&c1!=p)b1=p;
                if(a1!=q&&c1!=q)b1=q;
                  if(a1!=r&&c1!=r)b1=r;
                  if(b1-a1!=c1-b1)sum++;
             }
         }
     }*/

     vector<pair<int,int> >arr;
    vector<pair<int,int> >frr;
     int sum=0;

     for(int i=0;i<a.size();i++)
     {
         for(int j=0;j<b.size();j++)
         {
            arr.push_back(make_pair(a[i],b[j]));
         }
     }
      for(int i=0;i<b.size();i++)
     {
         for(int j=0;j<c.size();j++)
         {
             frr.push_back(make_pair(b[i],c[j]));
         }
     }
    int idx=b.size();
     for(int i=0;i<arr.size();i++)
     {
         for(int j=0;j<frr.size();j++)
         {
             if(arr[i].second==frr[j].first){
               int p=arr[i].first;
                int q=arr[i].second;
            int r=frr[j].second;
          //  cout<<p<<" "<<q<<" "<<r<<endl;
             int a1,b1,c1;
              a1=min(p,min(q,r));
              c1=max(p,max(q,r));
              if(a1!=p&&c1!=p)b1=p;
                if(a1!=q&&c1!=q)b1=q;
                  if(a1!=r&&c1!=r)b1=r;
                  if(b1-a1!=c1-b1)sum++;

         }
         }
     }



    printf("%d\n",sum);

}
