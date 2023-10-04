#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int counter=0;
    while(1)
    {
        string frr;
        frr=arr;
        int flag=0;
        for(int i=0;i<frr.size()-2;i++)
        {
            if(frr[i]=='x'&&frr[i]==frr[i+1]&&frr[i+1]==frr[i+2])
            {
                flag++;
                counter++;
                frr[i]='9';
                break;
            }
        }
        arr="";
        for(int i=0;i<frr.size();i++)
        {
            if(frr[i]!='9')arr+=frr[i];
        }
        if(flag==0)break;
    }
    cout<<counter<<endl;
}
