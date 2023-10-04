#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,sum=0;
    string arr;

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr;

        if(arr=="Tetrahedron")
        {
            sum+=4;
        }
        else if(arr=="Cube")
        {
            sum+=6;
        }
        else if(arr=="Octahedron")
        {
            sum+=8;
        }
        else if(arr=="Dodecahedron" )
        {
            sum+=12;
        }
        else if(arr=="Icosahedron")
        {
            sum+=20;
        }
    }
    cout<<sum<<endl;
}
