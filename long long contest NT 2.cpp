#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=1,counter=0,found=0,flag=0;
    cin>>n;

    while(1==1)
    {
        counter+=i;
        i++;
        found+=counter;

        if(n<found)
        {
            break;
        }
        else
        {
           flag++;
        }

    }

    cout<<flag<<endl;
}
