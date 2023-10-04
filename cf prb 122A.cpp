#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;

    int k=1,num=0,i,counter=0,yo=0;

    cin>>arr;


    stringstream geek(arr);

    geek>>num;

   if(num%4==0||num%7==0||num%47==0)
    {
        cout<<"YES"<<endl;
        return 0;
    }
    for(i=0;i<arr.size();i++)
    {
        yo++;
        if(arr[i]=='4'||arr[i]=='7')
        {
            counter++;
        }
    }
    if(counter==yo)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
