#include<bits/stdc++.h>
using namespace std;

char arr[252][252];
int n,m;

void built()
{
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)arr[i][j]='O';
    }
}
void cl()
{
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)arr[i][j]='O';
    }
}
void vertical()
{
    int x,y1,y2;
    char c;
    cin>>x>>y1>>y2>>c;
    if(y1>y2)swap(y1,y2);

    for(int i=y1;i<=y2;i++)arr[i][x]=c;
}

void horizontal()
{
    int x1,x2,y;
    char c;
    cin>>x1>>x2>>y>>c;
    if(x2<x1)swap(x1,x2);
    for(int i=x1;i<=x2;i++)arr[y][i]=c;
}

void rec()
{
    int x1,y1,x2,y2;
    char c;
    cin>>x1>>y1>>x2>>y2;
   // if(x2<x1)swap(x1,x2);
   /// if(y2<y1)swap(y1,y2);
    cin>>c;

    for(int i=y1;i<=y2;i++)
    {
        for(int j=x1;j<=x2;j++)
        {
            arr[i][j]=c;
        }
    }

}

void Fill(char Canvas[252][252], int R, int C, int X, int Y, char color)
{
    char OriginalColor = Canvas[X][Y];
    Canvas[X][Y] = color;
    if (X > 0 && Canvas[X-1][Y] == OriginalColor) Fill(Canvas, R, C, X-1,Y,color);

    if (Y > 0 && Canvas[X][Y-1] == OriginalColor) Fill(Canvas, R, C, X,Y-1,color);

    if (X < C && Canvas[X+1][Y] == OriginalColor) Fill(Canvas, R, C, X+1,Y,color);

    if (Y < R && Canvas[X][Y+1] == OriginalColor) Fill(Canvas, R, C, X,Y+1,color);

    if (X > 0 && Y > 0 && Canvas[X-1][Y-1] == OriginalColor) Fill(Canvas, R, C, X-1,Y-1,color);

    if (X > 0 && Y < R && Canvas[X-1][Y+1] == OriginalColor) Fill(Canvas, R, C, X-1,Y+1,color);

    if (X < C && Y > 0 && Canvas[X+1][Y-1] == OriginalColor) Fill(Canvas, R, C, X+1,Y-1,color);

    if (X < C && Y < R && Canvas[X+1][Y+1] == OriginalColor) Fill(Canvas, R, C, X+1,Y+1,color);

    Canvas[X][Y] = color;

    return;
}

void show()
{
    string name;
    cin>>name;
    cout<<name<<endl;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)cout<<arr[i][j];
        cout<<endl;
    }
}



void solve()
{
    while(1)
    {
        char cha;
        cin>>cha;
        if(cha=='I')
        {
           built();
        }
        else if(cha=='C')
        {
           cl();
        }
        else if(cha=='L')
        {
            int x,y;
            char c;
            cin>>x>>y>>c;
            arr[y][x]=c;
        }
        else if(cha=='V')
        {
           vertical();
        }
        else if(cha=='H')
        {
            horizontal();
        }
        else if(cha=='K')
        {
            rec();
        }
        else if(cha=='F')
        {
            int x,y;
            char c;
            cin>>x>>y;
            cin>>c;
            if(arr[y][x]==c)continue;
            Fill(arr,n,m,y,x,c);
        }
        else if(cha=='S')
        {
            show();
        }
        else if(cha=='X')
        {
            break;
        }
        else
        {
            string s;
            getline(cin,s);
        }
    }
}

int main()
{
  solve();
}
