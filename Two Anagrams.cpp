#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin>>s>>t;
    int counter=0;
    for(int i=0;i<s.size();i++)
    {
        if(counter>0)break;
        for(int j=0;j<t.size();j++)
        {
            if(s[i]<t[j])
            {
                counter++;
                break;
            }
        }
    }
    if(counter==1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
