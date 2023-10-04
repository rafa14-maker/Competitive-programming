#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string s;
        cin>>s;
        int one=0,two=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0')one++;
            else two++;
        }
        if(one==0||two==0)
        {
            cout<<s<<endl;
            continue;
        }

        for(int i=0;i<s.size();i++)
        {
           if(i+1<s.size()&&s[i]==s[i+1])
           {
               if(s[i]=='0')cout<<"01";
               else cout<<"10";
           }
           else cout<<s[i];
        }
        cout<<endl;

      //  cout<<"yes"<<endl;
    }
}
