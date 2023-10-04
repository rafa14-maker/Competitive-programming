#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        char board[n+5][n+5];
        char game[n+5][n+5];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>board[i][j];
            }
        }
        bool cr=false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>game[i][j];
                if(game[i][j]=='x'&&board[i][j]=='*')cr=true;
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(board[i][j]=='*')
                {
                    if(cr)cout<<"*";
                    else cout<<".";
                }
                else if(game[i][j]=='.')cout<<".";
                else
                {
                    int mine=0;
                    for(int r=i-1;r<=i+1;r++)
                    {
                        for(int c=j-1;c<=j+1;c++)
                        {
                            if(c>=0&&c<n&&r>=0&&r<n)
                            {
                                if(board[r][c]=='*')mine++;
                            }
                        }
                    }
                    cout<<mine;
                }
            }
            cout<<endl;
        }
        if(q)cout<<endl;
    }
}
