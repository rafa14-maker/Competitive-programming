#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string arr[5];
    for(int i=0;i<5;i++)cin>>arr[i];
    int counter=0;
    for(int i=0;i<5;i++)
    {
        if(s[0]==arr[i][0]||s[1]==arr[i][1])counter++;
    }
    if(counter>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
