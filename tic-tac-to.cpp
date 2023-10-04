#include<bits/stdc++.h>
using namespace std;

 char c[3][3];

bool vjudge(char x) {
	if (c[0][0]==x && c[1][1]==x && c[2][2]==x) return true;
	if (c[0][2]==x && c[1][1]==x && c[2][0]==x) return true;
	for (int i=0; i<3; i++) if ((c[0][i]==x && c[1][i]==x && c[2][i]==x)||(c[i][0]==x && c[i][1]==x && c[i][2]==x)) return true;
	return false;
}


int main()
{

    int a=0,b=0;
    bool g,f;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>c[i][j];
            if(c[i][j]=='0')b++;
            else if(c[i][j]=='X')a++;
        }
    }
    if(b>a||abs(b-a)>1)
    {
        cout<<"illegal"<<endl;
        return 0;
    }

     g=vjudge('X');
    f=vjudge('0');
    // cout<<g<<" "<<f<<endl;
    if(g&&f)
    {
        cout<<"illegal";
        return 0;
    }
    else if(g)
    {
         if(b>=a)
        {
            cout<<"illegal"<<endl;
            return 0;
        }
        cout<<"the first player won";
        return 0;
    }
    else if(f)
    {
        if(b<a)
        {
            cout<<"illegal"<<endl;
            return 0;
        }
        cout<<"the second player won";
        return 0;
    }



    if(a+b==9)
    {
       cout<<"draw"<<endl;
    }
    else if(a>b)
    {
        cout<<"second"<<endl;
    }
    else
    {
        cout<<"first"<<endl;
    }

}
