#include<bits/stdc++.h>
using namespace std;

int main()
{
    int frr[30]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {

        int k=s[i]-'a';
        frr[k]++;
    }

   //for(int i=0;i<30;i++)cout<<frr[i]<<" ";cout<<endl;

    for(int i=0;i<30;i++)
    {
        if(frr[i]%2!=0)
        {
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}
