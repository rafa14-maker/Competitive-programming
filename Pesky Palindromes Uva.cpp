#include<bits/stdc++.h>
using namespace std;

int main()
{
   string s;
    while(cin>>s)
    {
        set<string>st;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                bool flag=true;
                string frr;
                for(int a=i,b=j;a<=b;a++,b--)if(s[a]!=s[b])flag=false;
                if(flag)
                {
                    for(int a=i;a<=j;a++)frr+=s[a];
                    st.insert(frr);
                }
            }
        }
        cout<<"The string '"<<s<<"' contains "<<st.size()<<" palindromes."<<endl;
    }
}
