#include<bits/stdc++.h>
using namespace std;

vector<int>queen;
vector<int>king;
vector<int>same;

int n,m,k;
int arr[8][8];

void built()
{
    int counter=0;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            arr[i][j]=counter;
            counter++;
        }
    }
}

void king_built()
{
    int i,j;
    for(int a=0;a<8;a++)
    {
        for(int b=0;b<8;b++)
        {
            if(arr[a][b]==n)
            {
                i=a;
                j=b;
            }
        }
    }
    if(i+1<8)
    {
        king.push_back(arr[i+1][j]);
    }
    if(i-1>=0)
    {
        king.push_back(arr[i-1][j]);
    }
    if(j+1<8)
    {
        king.push_back(arr[i][j+1]);
    }
    if(j-1>=0)
    {
     king.push_back(arr[i][j-1]);
    }
}


void queen_built(int p)
{
      int i,j;
    for(int a=0;a<8;a++)
    {
        for(int b=0;b<8;b++)
        {
            if(arr[a][b]==p)
            {
                i=a;
                j=b;
            }
        }
    }
     int c=i;
     while(c+1<8)
     {
         c++;
         if(arr[c][j]==n)break;
         queen.push_back(arr[c][j]);
     }
     c=i;
     while(c-1>=0)
     {
         c--;
         if(arr[c][j]==n)break;
         queen.push_back(arr[c][j]);
     }
     c=j;
     while(c+1<8)
     {
         c++;
         if(arr[i][c]==n)break;
         queen.push_back(arr[i][c]);
     }
     c=j;
     while(c-1>=0)
     {
         c--;
         if(arr[i][c]==n)break;
         queen.push_back(arr[i][c]);
     }
}


void same_build()
{
    for(int i=0;i<king.size();i++)
    {
        for(int j=0;j<queen.size();j++)
        {
            if(king[i]==queen[j])
            {
                same.push_back(king[i]);
            }
        }
    }
}

void false_queen(int p)
{
        int i,j;
    for(int a=0;a<8;a++)
    {
        for(int b=0;b<8;b++)
        {
            if(arr[a][b]==p)
            {
                i=a;
                j=b;
            }
        }
    }

    vector<int>queen1;

     int c=i;
     while(c+1<8)
     {
         c++;
         queen1.push_back(arr[c][j]);
     }
     c=i;
     while(c-1>=0)
     {
         c--;
         queen1.push_back(arr[c][j]);
     }
     c=j;
     while(c+1<8)
     {
         c++;
         queen1.push_back(arr[i][c]);
     }
     c=j;
     while(c-1>=0)
     {
         c--;
         queen1.push_back(arr[i][c]);
     }

     for(int i=0;i<king.size();i++)
     {
         for(int j=0;j<queen1.size();j++)
         {
             if(king[i]==queen1[j])king[i]=100;
         }
     }

}


int main()
{
    while(scanf("%d %d %d",&n,&m,&k)!=EOF)
    {
        king.clear();
        same.clear();
        queen.clear();

        if(n==m)
        {
            cout<<"Illegal state"<<endl;
            continue;
        }
        if(n==k||m==k)
        {
            cout<<"Illegal move"<<endl;
            continue;
        }
        built();
        king_built();
        queen_built(m);
        same_build();
        false_queen(m);

     //  for(int i=0;i<king.size();i++)cout<<king[i]<<" ";cout<<endl;
     //  for(int i=0;i<queen.size();i++)cout<<queen[i]<<" ";cout<<endl;

        bool cr=true;
        for(int i=0;i<queen.size();i++)
        {
            if(queen[i]==k)cr=false;
        }
        if(cr)
        {
            cout<<"Illegal move"<<endl;
            continue;
        }
        cr=true;
        for(int i=0;i<same.size();i++)
        {
            if(same[i]==k)cr=false;
        }
        if(!cr)
        {
             cout<<"Move not allowed"<<endl;
            continue;
        }

        built();
        king_built();
        queen_built(k);
        same_build();
        false_queen(k);
        cr=false;

      // for(int i=0;i<king.size();i++)cout<<king[i]<<" ";cout<<endl;
      // for(int i=0;i<queen.size();i++)cout<<queen[i]<<" ";cout<<endl;


        for(int i=0;i<king.size();i++)
        {
            if(king[i]!=100)cr=true;
        }
        if(!cr)
        {
            cout<<"Stop"<<endl;
            continue;
        }
        cout<<"Continue"<<endl;
    }
}

