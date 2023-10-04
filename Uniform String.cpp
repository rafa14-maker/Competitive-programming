#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,k;
        cin>>n>>k;
        int counter=0;
        for(int i=0;i<n;i++)
        {
            if(counter==k)counter=0;
            cout<<(char)('a'+counter);
            counter++;
        }
        cout<<endl;
    }
}
