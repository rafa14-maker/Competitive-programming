#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int test;

ll frr[55][55];

string  con(ll n)
{
    string s;
    while(n>0)
    {
        int r = n%10;
        n/=10;
        s += (char)('0'+r);
    }
    reverse(s.begin(),s.end());
    return s;
}

void f()
{
    frr[1][1]=1;
    frr[2][1]=1;
    frr[2][2]=1;
    for(int i=3;i<=52;i++)
    {
        for(int j=1;j<=52;j++)
        {
            if(j==1)frr[i][j]=1;
            else frr[i][j] = frr[i-1][j-1]+frr[i-1][j];
        }
    }

   /* for(int j=1;j<=50;j++)
    {
        cout<<frr[51][j]<<" ";
    }cout<<endl; */
}

void solve()
{
    vector<char>v;
    ll k;
   // k++;
    while(1)
    {
        char c;
        cin>>c;
        if(c=='^')
        {
            cin>>k;
            break;
        }
        v.push_back(c);
    }

    string a,b;
    bool tr=false;
    int i;
    for(i=0;i<v.size();i++)
    {
        if(v[i]=='+')break;
        if(v[i]=='(')
        {
            tr=true;
        }
        else
        {
            if(tr)a+=v[i];
        }
    }
     i++;
    for(;i<v.size();i++)
    {
        if(v[i]==')')break;
        b+=v[i];
    }

   string s;
  // cout<<k<<endl;
   int idx=0;
   for(int j=1;j<55;j++)
   {
       if(frr[k+1][j]==0)
       {
           idx = j-1;
           break;
       }
   }//cout<<endl;
  // cout<<idx<<endl;
   s+=a;
   if(k>1){
   s+='^';
   s+=con(k);}
   ll op=k-1,po=1;
   for(int i=2;i<idx;i++)
   {
       s+='+';
       s+=con(frr[k+1][i]);
       s+='*';
       s+=a;
       if(op>1)
       {
           s+='^';
           s+=con(op);
       }
       s+='*';
       s+=b;
       if(po>1)
       {
           s+='^';
           s+=con(po);
       }
       op--;
       po++;
   }
    s+='+';
   s+=b;
   if(k>1){
   s+='^';
   s+=con(k);}
   printf("Case %d: ",++test);
   cout<<s<<"\n";
}

int main()
{
    f();
    int q;
   cin>>q;
    while(q--)solve();
}

/*

1
(a+b)^50

*/
