#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr,frr;
    cin>>arr>>frr;
    vector<string>str;

    for(int i=0;i<frr.size();i++)
    {
        string prr;
        int k=frr[i]-'0';
        int carry=0;
        for(int j=arr.size()-1;j>=0;j--)
        {
            int l=arr[j]-'0';
            int sum=l*k+carry;
            prr+=(sum%10+'0');
            carry=sum/10;
        }
        reverse(prr.begin(),prr.end());
        str.push_back(prr);
    }
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<endl;
    }

}
