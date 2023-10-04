#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        string arr;
        cin>>arr;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]=='1')
            {
                arr[i]='9';
                if(i-1>=0&&arr[i-1]!='9')
                {
                    if(arr[i-1]=='0')
                    {
                        int p=i;
                        while(p-1>=0&&arr[p-1]=='0')
                        {
                           arr[p-1]='9';
                           p--;
                        }
                        if(p-1>=0&&arr[p-1]=='1')arr[p-1]='0';
                    }
                    if(arr[i-1]=='1')arr[i-1]='0';
                }
                 if(i+1<arr.size()&&arr[i+1]!='9')
                {
                     if(arr[i+1]=='0')
                    {
                        int p=i;
                        while(p+1<arr.size()&&arr[p+1]=='0')
                        {
                           arr[p+1]='9';
                           p++;
                        }
                        if(p+1<arr.size()&&arr[p+1]=='1')arr[p+1]='0';
                }
                else if(arr[i+1]=='1')arr[i+1]='0';
            }
           // cout<<arr<<endl;
        }
    } int counter=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='0')
        {
            counter++;
            break;
        }
    }
    if(counter==0)cout<<"WIN"<<endl;
    else cout<<"LOSE"<<endl;
}

}
