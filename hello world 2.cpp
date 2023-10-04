#include<bits/stdc++.h>
using namespace std;

int main()
{
    char arr[100],frr[100],krr[100];

    int  i,j,k,counter=0,first,last,second,third,len1,len2,len3;

   gets(arr);
   gets(frr);
   gets(krr);



    k=0;

    len1=strlen(arr);
    len2=strlen(frr);
    len3=strlen(krr);

    if(len1>100||len2>100||len3>100)
    {
        cout<<"fantasy"<<endl;
        return 0;
    }

    if(len1<len2+len3)
    {
        cout<<"fantasy"<<endl;
        return 0;
    }

    while(k<len2)
    {
        counter=0;
        for(i=0;i<len1;i++)
        {
            if(arr[i]==frr[k])
            {
                counter++;
                break;
            }
        }
        if(counter!=0)
        {
            k++;
        }
        if(counter==0)
        {
            cout<<"fantasy"<<endl;
            return 0;
        }
    }
     k=0;

    while(k<len3)
    {
        counter=0;
        for(i=0;i<len1;i++)
        {
            if(arr[i]==krr[k])
            {
                counter++;
                break;
            }
        }
        if(counter!=0)
        {
            k++;
        }
        if(counter==0)
        {
            cout<<"fantasy"<<endl;
            return 0;
        }
    }

    for(i=0;i<len1;i++)
    {
        if(arr[i]==frr[0])
        {
            first=i;
            break;
        }
    }

     for(i=0;i<=len1;i++)
    {
        if(arr[i]==krr[0])
        {
            second=i;
            break;
        }
    }
     for(i=len1-1;i>=0;i--)
    {
        if(arr[i]==krr[0])
        {
            third=i;
            break;
        }
    }


    if(second!=third)
    {
        cout<<"both"<<endl;
    }
    else if(second==third)
    {
        if(first<second)
        {
            cout<<"forward"<<endl;
        }
        else
        {
            cout<<"backward"<<endl;
        }
    }

}
