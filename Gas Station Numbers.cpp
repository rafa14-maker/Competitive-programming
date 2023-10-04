#include<bits/stdc++.h>
using namespace std;

string frr;
int n;
vector<char>v;

string krr;


void f(string mask)
{
    if(krr.size()==mask.size())
    {
        if(krr<mask)
        {
            if(frr=="")frr=mask;
            else frr=min(frr,mask);
        }
        return ;
    }
    if(mask.size()>=krr.size())return ;
    for(int i=0;i<v.size();i++)
    {
        string cf=mask;
        f(cf+v[i]);
    }
}


int main()
{
    string arr;
    while(cin>>arr)
    {
        if(arr==".")break;
        set<char>s;
        v.clear();
        frr="";
        krr="";

        for(int i=0;i<arr.size();i++)
        {

           if(arr[i]!='.')
            {
                krr+=arr[i];
                s.insert(arr[i]);
            }
        }
        set<char>::iterator it;
        for(it=s.begin();it!=s.end();it++)
        {
            v.push_back(*it);
        }
        //cout<<krr<<endl;
        n=arr.size()-1;
        f(frr);
        if(frr=="")printf("The price cannot be raised.\n");
        else
        {
            for(int i=0;i<frr.size();i++)
            {
                if(i==frr.size()-1)cout<<"."<<frr[i];
               else cout<<frr[i];
            }
            printf("\n");
        }
    }
}
