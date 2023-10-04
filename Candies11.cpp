#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long n;
        cin>>n;
        int counter=1;
        int i=1;
        while(1)
        {
           counter=counter+pow(2,i);
           i++;
            if(n%counter==0)
            {
                cout<<counter-pow(2,i-1)<<endl;
                break;
            }
        }
    }
}

