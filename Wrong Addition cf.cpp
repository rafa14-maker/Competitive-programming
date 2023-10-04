#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define CherryFrog ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

void solve()
{
   // cout<<"yes"<<endl;
   string arr,frr;
   cin>>arr>>frr;

   reverse(arr.begin(),arr.end());
   reverse(frr.begin(),frr.end());

   int i = 0 ,j = 0;
   string s;

   for(int i=0;i<arr.size();i++)
   {
       if(j==frr.size())
             {
                 cout << -1 << endl;
                 return ;
             }
       if(arr[i]<=frr[j])
       {
           int a = (int)(arr[i]-'0');
          int b = (int)(frr[j]-'0');
          b-=a;
          char c = (char)('0'+b);
            s += c;
          j++;
       }
       else
       {
            int a = (int)(arr[i]-'0');
             int b = (int)(frr[j]-'0');
             if(j+1==frr.size())
             {
                 cout << -1 << endl;
                 return ;
             }

             int d = (int)(frr[j+1]-'0');
             int e = d*10+b;
             int f = e - a;

             if(f>=10)
             {
                   cout << -1 << endl;
                 return ;
             }
              char c = (char)('0'+f);
          s += c;

             j+=2;
       }
   }

   for(int k = j;k<frr.size();k++)s+=frr[k];

   reverse(s.begin(),s.end());
  // cout << s << endl;

  for(int i=0;i<s.size();i++)
  {
      if(s[i]>='0'&&s[i]<='9')continue;
      else
      {
          cout <<-1<<endl;
          return ;
      }
  }

 bool tr = false;
 for(int i=0;i<s.size();i++)
 {
     if(s[i]>='1')tr=true;
    if(tr)cout <<s[i];
 }
 if(!tr)cout <<"0";
 cout << endl;
}

int main()
{
    CherryFrog;
   int q;cin>>q;while(q--)solve();
 //  solve();
}

