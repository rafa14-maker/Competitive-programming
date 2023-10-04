#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int pen=a/c;
        if(a%c!=0)pen+=1;
        int pencil=b/d;
        if(b%d!=0)pencil+=1;
        if(pen+pencil<=k)
        {
            cout<<pen<<" "<<pencil<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
