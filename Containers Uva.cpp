#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    while(1)
    {
        string s;
        cin>>s;
        if(s=="end")break;
        vector<char>v;
        for(int i=0;i<s.size();i++)
        {
            int flag=0;
            for(int j=0;j<v.size();j++)
            {
                if(v[j]>=s[i])
                {
                    v[j]=s[i];
                    flag++;
                    break;
                }
            }
            if(flag==0)v.push_back(s[i]);
        }
        printf("Case %d: %d\n",++t,v.size());
    }
}
