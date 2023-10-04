#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr;
    cin>>arr>>frr;
    int mn=1e9;
    for(int i=0;i<arr.size();i++)
    {
        if(i+frr.size()-1<arr.size())
        {
            int cnt=0;
            for(int j=0;j<frr.size();j++)
            {
                if(frr[j]!=arr[i+j])cnt++;
            }
            mn=min(mn,cnt);
        }
    }
    cout<<mn<<endl;
}
