#include<bits/stdc++.h>
using namespace std;


bool cmp(char a,char b)
{
    if(a=='(')
    {
        if(b==')')return true;
        return false;
    }
     if(a=='{')
    {
        if(b=='}')return true;return false;
    }
     if(a=='[')
    {
        if(b==']')return true;return false;
    }
    return false;
}



int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int flag=0;
        string s;
        cin>>s;
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(st.size()==0)
            {
                st.push(s[i]);
            }
            else
            {
                int flag=0;
              if(st.size()>0&&cmp(st.top(),s[i]))
              {
                  st.pop();
                  flag++;
              }
              if(flag==0)st.push(s[i]);
            }
        }

        if(st.size()==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
