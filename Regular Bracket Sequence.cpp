#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    cin>>arr;
    int counter=0,m=0;
    stack<int>s;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]=='(')
        {
            s.push(arr[i]);
        }
        else if(arr[i]==')')
        {
            if(!s.empty())
            {
                char k=s.top();
                if(k=='(')counter++;
                s.pop();
            }
        }
    }
    cout<<counter*2<<endl;
}
