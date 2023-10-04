#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string arr;
        cin>>arr;

        for(int i=0;i<arr.size();i++)
        {
            if(i+1<arr.size())
            {
                if(arr[i]==arr[i+1])arr[i]='0',arr[i+1]='0';
            }
        }
        sort(arr.begin(),arr.end());
        set<char>s;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!='0')s.insert(arr[i]);
        }

       set<char>::iterator it;
        for(it= s.begin();it!=s.end();it++)
        {
            cout<<*it;
        }
        cout<<endl;

            }
}
