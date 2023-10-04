#include<bits/stdc++.h>
using namespace std;

void ak(string str,int n,int index = 0,string curr = "")
{
    int k=str.size();
    if (index==k) {
            if(curr.size()==n){
        cout << curr << endl;}
        return;
    }

    ak(str,n, index + 1, curr + str[index]);
    ak(str,n, index + 1, curr);
}


int main()
{
    while(1==1)
    {
        string arr;
        int n;
        cin>>arr;
        cin>>n;
        ak(arr,n);
    }
}
