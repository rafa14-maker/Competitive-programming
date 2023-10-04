#include<bits/stdc++.h>
using namespace std;

int main()
{  freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int i,j;
    cin>>i>>j;
    string arr;

    while(i>0||j>0)
    {
        if(i>0)
        {
            arr+='B';
            i--;
        }
        if(j>0)
        {
            arr+='G';
            j--;
        }
    }
    cout<<arr<<endl;
}
