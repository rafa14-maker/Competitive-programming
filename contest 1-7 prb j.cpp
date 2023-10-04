#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,a,b,white=0,black=0;

    int arr[8][8];

    char p;

    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            cin>>p;
            if(p=='Q')
            {
                white+=9;
            }
           else if(p=='R')
            {
                white+=5;
            }
           else if(p=='B')
            {
                white+=3;
            }
           else if(p=='N')
            {
                white+=3;
            }
           else if(p=='P')
            {
                white+=1;
            }
             if(p=='q')
            {
                black+=9;
            }
           else if(p=='r')
            {
                black+=5;
            }
           else if(p=='b')
            {
                black+=3;
            }
           else if(p=='n')
            {
                black+=3;
            }
           else if(p=='p')
            {
                black+=1;
            }

        }

    }
    if(white>black)
    {
        cout<<"White"<<endl;
    }
    else if(white==black)
    {
        cout<<"Draw"<<endl;
    }
    else
    {
        cout<<"Black"<<endl;

    }
}
