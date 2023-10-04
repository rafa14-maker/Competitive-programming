#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,c,i,j;
    char a;

    cin>>b>>c;

    for(i=0;i<b;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a;
            if(a=='C'||a=='M'||a=='Y')
            {
                  cout<<"#Color"<<endl;
                return 0;
            }
        }
    }
  cout<<"#Black&White"<<endl;
}
