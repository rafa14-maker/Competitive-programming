#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q=0;
    while(1)
    {
        char arr[10][10];
        int n=5;
        int l=-1,r=-1;
        if(q!=0)getchar();
        for(int i=0;i<n;i++)
        {
            string frr;
            getline(cin,frr);
            if(frr=="Z"){return 0;}
            else if(frr.size()==5)
            {
                arr[i][0]=frr[0];
                if(frr[0]==' ')l=i,r=0;
                arr[i][1]=frr[1];
                if(frr[1]==' ')l=i,r=1;
                arr[i][2]=frr[2];
                if(frr[2]==' ')l=i,r=2;
                arr[i][3]=frr[3];
                if(frr[3]==' ')l=i,r=3;
                arr[i][4]=frr[4];
                if(frr[4]==' ')l=i,r=4;
            }
            else if(frr.size()==4)
            {
                arr[i][0]=frr[0];
                if(frr[0]==' ')l=i,r=0;
                arr[i][1]=frr[1];
                if(frr[1]==' ')l=i,r=1;
                arr[i][2]=frr[2];
                if(frr[2]==' ')l=i,r=2;
                arr[i][3]=frr[3];
                if(frr[3]==' ')l=i,r=3;
                arr[i][4]=' ';
                if(arr[i][4]==' ')l=i,r=4;
            }
           // cout<<l<<" "<<r<<endl;
        }
        string str;
        while(1)
        {
            char p;
            cin>>p;
            if(p=='0')break;
            else str+=p;
        }
        bool tr=true;
      //  cout<<l<<" "<<r<<endl;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='A')
            {
                if(l-1>=0)
                {
                    swap(arr[l][r],arr[l-1][r]);
                    l--;
                }
                else tr=false;
            }
            else if(str[i]=='B')
            {
                if(l+1<5)
                {
                    swap(arr[l][r],arr[l+1][r]);
                    l++;
                }
                else tr=false;
            }
            else if(str[i]=='L')
            {
                if(r-1>=0)
                {
                    swap(arr[l][r],arr[l][r-1]);
                    r--;
                }
                else tr=false;
            }
            else if(str[i]=='R')
            {
                if(r+1<5)
                {
                    swap(arr[l][r],arr[l][r+1]);
                    r++;
                }
                else tr=false;
            }
        }
        if(q)cout<<"\n";
        printf("Puzzle #%d:\n",++q);
        if(tr){
        for(int i=0;i<n;i++)
        {

                printf ("%c %c %c %c %c\n", arr [i] [0], arr[i] [1],arr[i] [2], arr[i] [3], arr[i] [4]);

        }
        }
        else
        {
            cout<<"This puzzle has no final configuration."<<endl;
        }
    }
}
