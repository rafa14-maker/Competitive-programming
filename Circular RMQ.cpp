#include<bits/stdc++.h>
using namespace std;

const int N = 2e5+5;
 using ll = long long;

 string Intostr(int x){stringstream ss; ss << x; string str = ss.str(); return str;}
vector<string> Linetostr(string str){string s; vector <string> v ;istringstream is(str); while(is >> s)v.push_back(s);return v;}
int Strtoint(string str){stringstream ss(str);int x = 0;ss >> x ;return x ;}
#define FasterIO     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

 ll arr[N];
 ll tree[N*4];
 ll lazy[N*4];

 void pro(int idx,int left,int right)
 {
     tree[idx]+=lazy[idx];
     if(left!=right)
     {
         lazy[idx*2]+=lazy[idx];
         lazy[idx*2+1]+=lazy[idx];
     }
     lazy[idx]=0;
 }

 void build(int idx,int left,int right)
 {
     if(left==right)
     {
         tree[idx]=arr[left];
         return ;
     }

     int mid=(left+right)/2;
     build(idx*2,left,mid);
     build(idx*2+1,mid+1,right);

     tree[idx]=min(tree[idx*2],tree[idx*2+1]);
 }

 void update(int idx,int left,int right,int l,int r,ll val)
 {
     if(lazy[idx]!=0)pro(idx,left,right);
     if(r<left||right<l)return;
     if(l<=left&&right<=r)
     {
         tree[idx]+=val;
         if(left!=right)
         {
             lazy[idx*2]+=val;
             lazy[idx*2+1]+=val;
         }
         return ;
     }
     int mid=(left+right)/2;
     update(idx*2,left,mid,l,r,val);
     update(idx*2+1,mid+1,right,l,r,val);
      tree[idx]=min(tree[idx*2],tree[idx*2+1]);
 }

 ll query(int idx,int left,int right,int l,int r)
 {
     if(lazy[idx]!=0)pro(idx,left,right);
      if(r<left||right<l)return 1e17;
     if(l<=left&&right<=r)
     {
       return tree[idx];
     }
     int mid=(left+right)/2;
     ll x = query(idx*2,left,mid,l,r);
     ll y = query(idx*2+1,mid+1,right,l,r);

     return min(x,y);
 }

 int main()
 {
     FasterIO
     int n;
     cin>>n;
     for(int i=0;i<n;i++)cin>>arr[i];
     build(1,0,n-1);
     int m;
     cin>>m;
     string s;
     getline(cin,s);
     while(m--)
     {
        string s ; getline(cin , s) ;
        vector <string> v = Linetostr(s) ;
        int l = Strtoint(v[0]) ;
        int r = Strtoint(v[1]) ;

           if(v.size()==2)
           {
               ll ans = 1e18;
               if(l<=r)
               {
                   ans=query(1,0,n-1,l,r);
               }
               else
               {
                   ans=query(1,0,n-1,l,n-1);
                   ans=min(ans,query(1,0,n-1,0,r));
               }
               cout<<ans<<"\n";
           }
           else
           {
              ll ans = Strtoint(v[2]);
              if(l<=r)
               {
                  update(1,0,n-1,l,r,ans);
               }
               else
               {
                   update(1,0,n-1,l,n-1,ans);
                   update(1,0,n-1,0,r,ans);
               }
           }
     }
 }
