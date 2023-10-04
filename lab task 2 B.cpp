#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter string : ";
    string arr[4]={"+","-","*","/"};
    string str;
    cin>>str;
    bool tr=false;
    for(int i=0;i<4;i++)
    {
      if(arr[i]==str)tr=true;
    }
    if(tr)cout<<"Input is a operator ."<<endl;
    else cout<<"Input is not a operator."<<endl;
}

