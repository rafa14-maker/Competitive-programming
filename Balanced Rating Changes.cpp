#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int flag=1;

    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        //cout<<a<<endl;
        if(a%2==0)cout<<a/2<<endl;
        else
        {
            if (flag)     cout<<(a+1)/2<<endl;
            else       cout<<(a-1)/2<<endl;
            flag = !flag;
        }
    }

}
