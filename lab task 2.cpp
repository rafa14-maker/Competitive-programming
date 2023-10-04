#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter string : ";
    string str;
    cin>>str;
    bool tr=true;
    for(int i=0;i<str.size();i++)
    {
       int k= str[i]-'0';
       if(k<0||k>9)tr=false;
    }
    if(tr)cout<<"Numeric constant ."<<endl;
    else cout<<"Not Numeric constant ."<<endl;
}
