#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,q;
    cin>>m>>q;
    string arr[m+5];
    for(int i=0;i<m;i++)cin>>arr[i];
    while(q--)
    {
        string s;
        cin>>s;
        int cnt=1e7,idx=-1;
        for(int i=0;i<m;i++)
        {
            string frr=arr[i];
            for(int j=0;j<frr.size();j++)
            {
                if(j+s.size()-1<frr.size())
                {
                    string str;
                   for(int a=0;a<s.size();a++)str+=frr[j+a];
                    int pk=0;
                    //cout<<"no"<<endl;
                    for(int k=0;k<str.size();k++)if(str[k]!=s[k])pk++;
                     if(pk<cnt)
                     {
                         cnt=pk;
                         idx=i;
                     }
                }
            }
        }
        cout<<idx+1<<endl;
    }
}
