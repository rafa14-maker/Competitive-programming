#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int counter=0,flag=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]=='1')counter++;
        if(arr[i]==arr[i+1]&&arr[i]=='1')flag++;
    }
 //  cout<<counter<<" "<<flag<<endl;
    if(counter==0)
    {
        cout<<"NO"<<endl;
        return 0;
    }

    if(flag>0)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(i-1>0&&i+1<n&&arr[i-1]=='0'&&arr[i+1]=='0'&&arr[i]=='0')
        {
            cout<<"NO"<<endl;
            return 0;
        }
       else if(i==0&&arr[i+1]=='0'&&arr[i]=='0')
       {
           cout<<"NO"<<endl;
            return 0;
       }
       else if(i==n-1&&arr[i-1]=='0'&&arr[i]=='0')
       {
           cout<<"NO"<<endl;
            return 0;
       }
    }
    cout<<"YES"<<endl;
}

