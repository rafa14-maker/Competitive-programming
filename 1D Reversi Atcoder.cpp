#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int counter=0;
    for(int i=s.size()-1;i>0;i--)
    {
        if(i-1>=0&&s[i]!=s[i-1])counter++;
    }
    cout<<counter<<endl;
}
