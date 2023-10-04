#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,counter=0,found=0,i;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a>b)
        {
            counter++;
        }
        else if(b>a)
        {
            found++;
        }
    }
    if(counter>0&&found>0)
    {
        cout<<"Happy Alex"<<endl;
    }
    else
    {
        cout<<"Poor Alex"<<endl;
    }

    return 0;

}
