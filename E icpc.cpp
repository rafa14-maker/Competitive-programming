#include<bits/stdc++.h>
using namespace std;

vector<string>one;
vector<string>two;
bool vis[105];

int rt;

void fun()
{
    string str;
    getline(cin,str);
    stringstream ss;
    ss<<str;
    vector<string>v;
    string val;
    while(ss>>val)
    {
        v.push_back(val);
    }
    rt = v.size();
}

void solve()
{
    fun();

   int n;
   cin>>n;

   vector<string>vs;

   for(int i=0;i<n;i++)
   {
       string str;
       cin>>str;
       vs.push_back(str);
   }

   for(int i=0;i<n;i++)
   {
       vis[i]=false;
   }

   int counter=1,i=0;
   while(1)
   {
       int idx=0;
       if(one.size()+two.size()==n)break;
       while(1)
       {
           if(i==n)i=0;
           if(vis[i]==false)
           {
               idx++;
               if(idx==rt)
               {
                  if(counter==1)
                  {
                      counter=2;
                      one.push_back(vs[i]);
                      vis[i]=true;
                      break;
                  }
                  else
                  {
                     counter=1;
                      two.push_back(vs[i]);
                      vis[i]=true;
                      break;
                  }
               }
           }
           i++;
       }
   }

   cout<<one.size()<<endl;
   for(int i=0;i<one.size();i++)
   {
       cout<<one[i]<<endl;
   }

   cout<<two.size()<<endl;
   for(int i=0;i<two.size();i++)
   {
       cout<<two[i]<<endl;
   }

}

int main()
{
    solve();
}
