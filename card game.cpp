#include<bits/stdc++.h>
using namespace std;

int main()
{
    char n;
    cin>>n;
    char arr[2],frr[2];
    cin>>arr[0]>>arr[1]>>frr[0]>>frr[1];
    int counter=0;
    if(arr[0]=='6')counter=1;
    if(arr[0]=='7')counter=2;
    if(arr[0]=='8')counter=3;
    if(arr[0]=='9')counter=4;
    if(arr[0]=='T')counter=5;
    if(arr[0]=='J')counter=6;
    if(arr[0]=='Q')counter=7;
    if(arr[0]=='K')counter=8;
    if(arr[0]=='A')counter=9;

     int founder=0;
    if(frr[0]=='6')founder=1;
    if(frr[0]=='7')founder=2;
    if(frr[0]=='8')founder=3;
    if(frr[0]=='9')founder=4;
    if(frr[0]=='T')founder=5;
    if(frr[0]=='J')founder=6;
    if(frr[0]=='Q')founder=7;
    if(frr[0]=='K')founder=8;
    if(frr[0]=='A')founder=9;


    if(arr[1]==n&&frr[1]==n)
    {
        if(counter>founder)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
  else  if(arr[1]!=n&&frr[1]==n)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else if(arr[1]==n&&frr[1]!=n)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    else if(arr[1]!=n&&frr[1]!=n)
    {
        if(arr[1]!=frr[1])
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(counter>founder)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
