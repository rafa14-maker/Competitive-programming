#include<bits/stdc++.h>
using namespace std;

set<string>st;
int n;

void f(int pos,string s)
{
    if(pos>n)return ;
    if(pos==n)
    {
       // cout<<s<<endl;
      //  sort(s.begin(),s.end());
        st.insert(s);
        return ;
    }
    f(pos+1,s+'B');
    f(pos+2,s+'R');
  //  f(pos+2,s+'G');
}

int main()
{
    st.clear();
   // string s;
   // cin>>s;
    cin>>n;
    f(0,"");
   // for(auto it=st.begin();it!=st.end();it++)cout<<*it<<endl;
    cout<<st.size()<<endl;
}
