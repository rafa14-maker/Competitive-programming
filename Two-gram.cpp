#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    char c,d;
    int counter=0;

    for(int i=0;i<arr.size()-1;i++)
    {
        char a=arr[i],b=arr[i+1];
        int flag=0;
        for(int j=0;j<arr.size()-1;j++)
        {
            if(arr[j]==a&&arr[j+1]==b)
            {
                flag++;
            }
        }
        if(flag>counter)
        {
            c=a;
            d=b;
            counter=flag;
        }
    }
    cout<<c<<d<<endl;
}
