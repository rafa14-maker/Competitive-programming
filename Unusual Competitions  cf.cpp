#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

bool check(string s)
{
  stack<char>qt;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]=='(')
      {
          qt.push('(');
      }
      else
      {
          if(qt.size()==0)return false;
          else qt.pop();
      }
  }
  return true;
}

void solve()
{
   // cout<<"yes"<<endl;
   int n;
   cin>>n;

   string s;
   cin>>s;

   int a=0,b=0;

   for(int i=0;i<s.size();i++)
   {
       if(s[i]=='(')a++;
       else b++;
   }

   if(a!=b)
   {
       cout<<-1<<endl;
       return ;
   }

   if(check(s))
   {
       cout<<0<<endl;
       return ;
   }

   int cnt = 0;

   for(int i=0;i<s.size();i++)
   {
       if(i%2==0)
       {
           if(s[i]=='(')continue;
           for(int j=i+1;j<s.size();j++)
           {
               if(s[j] == '(')
               {
                   swap(s[i],s[j]);
                   cnt += 2*(j-i);
                   break;
               }
           }
       }
       else
       {
            if(s[i]==')')continue;
           for(int j=i+1;j<s.size();j++)
           {
               if(s[j] == ')')
               {
                   swap(s[i],s[j]);
                   cnt += 2*(j-i);
                   break;
               }
           }
       }
   }
  cout << s << endl;
   cout << cnt << endl;
}

int main()
{
    CherryFrog;
  // int q;cin>>q;while(q--)solve();
   solve();
}

