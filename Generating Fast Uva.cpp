#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    getchar();
    while(n--)
    {
        char arr[11];
        gets(arr);
        int len=strlen(arr);
        sort(arr,arr+len);
        do
        {
           puts(arr);
        }while(next_permutation(arr,arr+len));
        printf("\n");
    }
}
