#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string arr;
    cin>>arr;
    int counter=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='-'&&counter==0)continue;
        else if(arr[i]=='-'&&counter>0)counter-=1;
        else if(arr[i]=='+')counter+=1;
    }
    cout<<counter<<endl;
}
