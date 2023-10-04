#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,a=0,b=0,p,n,k,c=0;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>p;
        if(a==0)a=p;
        else a=min(a,p);

        b=max(b,p);
    }
    for(i=0;i<k;i++)
    {
        cin>>p;
        if(c==0)c=p;
        else c=min(c,p);
    }
    if(max(2*a,b)<c)
    {
        cout<<max(2*a,b)<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
}
/*55 44

93 17 74 15 34 16 41 80 26 54 94 94 86 93 20 44 63 72 39 43 67 4 37 49 76 94 5 51 64 74 11 47 77 97 57 30 42 72 71 26 8 14 67 64 49 57 30 23 40 4 76 78 87 78 79

38 55 17 65 26 7 36 65 48 28 49 93 18 98 31 90 26 57 1 26 88 56 48 56 23 13 8 67 80 2 51 3 21 33 20 54 2 45 21 36 3 98 62 2
*/
