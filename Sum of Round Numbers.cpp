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
        reverse(s.begin(),s.end());

        int counter=0;
         for(int i=0;i<s.size();i++)
        {
            if(s[i]!='0')
            {
                counter++;
            }

        }
        cout<<counter<<endl;


        int idx=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='0')
            {
                cout<<s[i];
                for(int j=0;j<idx;j++)cout<<0;
                cout<<" ";
            }
            idx++;
        }
        cout<<endl;
    }
}
