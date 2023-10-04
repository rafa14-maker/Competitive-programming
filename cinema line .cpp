#include<iostream>
using namespace std;

int main()
{
    int n,i;
    int arr[100005];

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int counter=0,flag=0,found=0;

    for(i=0;i<n;i++)
    {

        if(arr[i]==25)
        {
            counter++;
        }
        if(arr[i]==50)
        {
            if(counter<1)
            {
                flag++;
                break;
            }
            else
            {
                found++;
                counter--;
            }
        }
        if(arr[i]==100)
        {
           if(counter<0||(found<1&&counter<1))
           {
               flag++;
               break;
           }
           else
           {
               if(found>0&&counter>0)
               {
                   found--;
                   counter--;
               }
               else
               {
                   if(counter<3)
                   {
                       flag++;
                       break;
                   }
                   counter-=3;
               }
           }
        }
    }
    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
