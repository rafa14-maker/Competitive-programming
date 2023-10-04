#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        int flag;
        if(n%2==1)flag=(n/2)+1;
        else flag=n/2;

        int r,p,s;
        cin>>r>>p>>s;
        vector<char>v;
        string arr;
        cin>>arr;
        int counter=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]=='R')
            {
                if(p>0)
                {
                    counter++;
                    p--;
                    v.push_back('P');
                }
                else v.push_back('9');
            }
                else if(arr[i]=='P')
                    {
                if(s>0)
                {
                    counter++;
                    s--;
                    v.push_back('S');
                }
                else v.push_back('9');
            }
                else if(arr[i]=='S')
                    {
                if(r>0)
                {
                    counter++;
                    r--;
                    v.push_back('R');
                }
                else v.push_back('9');
            }
        }
        if(counter>=flag)
        {
            cout<<"YES"<<"\n";
            for(int i=0;i<v.size();i++)
            {
                if(v[i]=='9')
                {
        if(r>0)cout<<"R",r--;
        else if(p>0) cout<<"P",p--;
        else if(s>0)  cout<<"S",s--;
                }
                else cout<<v[i];
            }
            while(r>0)cout<<"R",r--;
            while(p>0)cout<<"P",p--;
            while(s>0)cout<<"S",s--;
            cout<<"\n";
        }
        else cout<<"NO"<<"\n";
    }
}
