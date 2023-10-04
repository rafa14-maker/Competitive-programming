#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int m=0,counter=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='A'||s[i]=='C'||s[i]=='G'||s[i]=='T')counter++;
        else
        {
            m=max(counter,m);
            counter=0;
        }
    }
    m=max(m,counter);
    cout<<m<<endl;
}
