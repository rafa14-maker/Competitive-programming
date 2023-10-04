#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,counter=0,found=0;
    char c;

    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            cin>>c;

            if(c=='Q')
            {
                counter+=9;
            }
            else if(c=='R')
            {
                counter+=5;
            }
             else if(c=='B')
            {
                counter+=3;
            }
             else if(c=='N')
            {
                counter+=3;
            }
             else if(c=='P')
            {
                counter+=1;
            }
            else if(c=='q')
            {
                found+=9;
            }
            else if(c=='r')
            {
                found+=5;
            }
             else if(c=='b')
            {
                found+=3;
            }
             else if(c=='n')
            {
                found+=3;
            }
             else if(c=='p')
            {
                found+=1;
            }

        }
    }
    if(counter==found)
    {
        cout<<"Draw"<<endl;
    }
    else if(counter>found)
    {
        cout<<"White"<<endl;
    }
    else if(counter<found)
    {
        cout<<"Black"<<endl;
    }
}
