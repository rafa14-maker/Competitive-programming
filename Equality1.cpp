#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int frr[27]={0};
    for(int i=0;i<s.size();i++)
    {
        frr[s[i]-65]++;
    }
    int counter=1e7;
    for(int i=0;i<k;i++)
    {
        counter=min(counter,frr[i]);
    }
    cout<<counter*k<<endl;
}
