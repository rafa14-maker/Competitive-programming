#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arr;
    int n,counter=0,k=1;
    cin>>n;
    while(n--)
    {
        cin>>arr;
        if(arr[0]=='A'||arr[0]=='P'||arr[0]=='O'||arr[0]=='R')
        {
            if(k==0){k=1;}
            if(k==2){counter+=1,k=1;}
            if(k==3){counter+=2,k=1;}

        }
        if(arr[0]=='B'||arr[0]=='M'||arr[0]=='S')
        {
             if(k==0){counter+=1,k=2;}
             if(k==1){counter+=1,k=2;}
            if(k==3){counter+=1,k=2;}

        }
            if(arr[0]=='D'||arr[0]=='G'||arr[0]=='J'||arr[0]=='K'||arr[0]=='T'||arr[0]=='W')
        {
             if(k==0){counter+=3,k=3;}
             if(k==2){counter+=1,k=3;}
            if(k==1){counter+=2,k=3;}
        }
    }
    cout<<counter<<endl;
}
