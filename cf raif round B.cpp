#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
  // int cnt=0;
   bool pk=false,kp=false;

   for(int i=0;i<s.size();i++)
   {
        if(s[i]=='>')pk=true;
         if(s[i]=='<')kp=true;
   }
    int cnt=0;
    for(int i=1;i<s.size()-1;i++)
    {
         if(s[i]=='-')cnt++;
         else if(s[i-1]=='-')cnt++;
       //  else if(s[i+1]=='-')cnt++;
    }

    if(s[0]=='-')cnt++;
  //  else if(s.size()>1&&s[1]=='-')cnt++;
    else if(s[s.size()-1]=='-')cnt++;

      if(s[s.size()-1]=='-')cnt++;
    else if(s.size()>1&&s[s.size()-2]=='-')cnt++;
   // else if(s[0]=='-')cnt++;

    if(!kp||!pk)
    {
        cout<<n<<endl;
        return ;
    }

    cout<<cnt<<endl;


}

int main()
{
    int q;cin>>q;while(q--)solve();
   // solve();
}

