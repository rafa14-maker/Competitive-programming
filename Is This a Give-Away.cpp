#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int l=0,r=s.size()-1,counter=0;
    while(l<r)
    {
        if((s[l]=='{')&&(s[r]=='}'))
            {
                counter++;
                l++;
                r--;
            }
            if(s[l]!='{')l++;
            if(s[r]!='}')r--;
    }
    cout<<counter<<endl;
}
