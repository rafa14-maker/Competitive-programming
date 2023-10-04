#include<bits/stdc++.h>
using namespace std;

int main()
{

 char arr[20];

 gets(arr);

 for(int i=0;arr[i]!='\0';i++)
 {
     if(arr[i]!=' ')
     {
         cout<<arr[i];
     }
 }

}
