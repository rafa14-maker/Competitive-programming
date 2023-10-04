#include<bits/stdc++.h>
using namespace std;

int main()
{
    string as,bs,cs;
    cin>>as>>bs>>cs;
    vector<char>arr;
    vector<char>frr;
    vector<char>krr;

    for(int i=0;i<as.size();i++)
    {
        arr.push_back(as[i]);
    }
    reverse(arr.begin(),arr.end());

     for(int i=0;i<bs.size();i++)
    {
        frr.push_back(bs[i]);
    }
    reverse(frr.begin(),frr.end());

     for(int i=0;i<cs.size();i++)
    {
        krr.push_back(cs[i]);
    }
    reverse(krr.begin(),krr.end());

    int counter=0;

    while(1)
    {
        if(counter==0)
        {
            int len=arr.size();
            if(len==0)
            {
                cout<<"A"<<endl;
                return 0;
            }
            char c=arr[len-1];
            arr.pop_back();
            if(c=='a')counter=0;
            if(c=='b')counter=1;
            if(c=='c')counter=2;
        }
         if(counter==1)
        {
            int len=frr.size();
            if(len==0)
            {
                cout<<"B"<<endl;
                return 0;
            }
            char c=frr[len-1];
            frr.pop_back();
            if(c=='a')counter=0;
            if(c=='b')counter=1;
            if(c=='c')counter=2;
        }
         if(counter==2)
        {
            int len=krr.size();
            if(len==0)
            {
                cout<<"C"<<endl;
                return 0;
            }
            char c=krr[len-1];
            krr.pop_back();
            if(c=='a')counter=0;
            if(c=='b')counter=1;
            if(c=='c')counter=2;
        }
    }
}
