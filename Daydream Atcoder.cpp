#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    while(s.size()>0)
    {
        int n=s.size();
        if(n>=5&&(s.substr(n-5,5)=="dream"||s.substr(n-5,5)=="erase"))s.erase(n-5,5);
        else if(n>=7&&s.substr(n-7,7)=="dreamer")s.erase(n-7,7);
        else if(n>=6&&s.substr(n-6,6)=="eraser")s.erase(n-6,6);
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
}
