#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    for(int i=0;i<str.size()-1;i++)
    {
        if(str[i]==str[i+1])
        {
            cout<<"Bad"<<"\n";
            return 0;
        }
    }
    cout<<"Good"<<"\n";
}
