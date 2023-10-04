#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr;
    cin>>arr>>frr;
    string s=arr;

    while(1)
    {

        string f;
        for(int i=1;i<s.size();i++)
        {
            f+=s[i];
        }
        f+=s[0];

         if(f==frr)
        {
            cout<<"Yes"<<endl;
            return 0;
        }
        if(f==arr)break;
        s=f;
    }
    cout<<"No"<<endl;
}
