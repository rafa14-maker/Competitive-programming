#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string arr,frr,krr;
        cin>>arr>>frr>>krr;
        int flag=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]!=krr[i]&&krr[i]!=frr[i])flag++;
        }
        if(flag==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
