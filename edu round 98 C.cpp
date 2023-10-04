#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
   deque<char>a,b,c,d;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')a.push_back(i);
       // else if(s[i]==')')b.push_back(i);
        else if(s[i]=='[')c.push_back(i);
      //  else if(s[i]==']')d.push_back(i);

      if(s[i]==')')
      {
          while(!a.empty())
          {
              int ak=a.front();
              if(ak<i)
              {
                  cnt++;
                  a.pop_front();
                  break;
              }
              a.clear();
          }
      }

      if(s[i]==']')
      {
          while(!c.empty())
          {
              int ak=c.front();
              if(ak<i)
              {
                  cnt++;
                  c.pop_front();
                  break;
              }
              c.clear();
          }
      }

    }
  /* while(!b.empty()&&!a.empty())
   {
       int ak=a.front(),bk=b.front();
       if(ak<bk)
       {
           cnt++;
           a.pop_front();
           b.pop_front();
       }
       else if(ak>bk)
       {
           b.pop_front();
       }
   }

   while(!c.empty()&&!d.empty())
   {
       int ak=c.front(),bk=d.front();
       if(ak<bk)
       {
           cnt++;
           c.pop_front();
           d.pop_front();
       }
       else if(ak>bk)
       {
           d.pop_front();
       }
   }*/
 printf("%d\n",cnt);
}

int main()
{
    int q;
  scanf("%d",&q);
    while(q--)solve();
}
