#include<bits/stdc++.h>
using namespace std;

bool myfunc(char a, char b) {
    int delta = tolower(a) - tolower(b);
    return delta ? delta < 0 : a < b;
}
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char s[110];
        scanf("%s",s);
       sort(s,s+strlen(s),myfunc);

        do{
            puts(s);
        }while(next_permutation(s,s+strlen(s),myfunc));



    }
}
