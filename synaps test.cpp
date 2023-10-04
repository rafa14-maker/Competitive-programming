

#include <iostream>
#include <string>
using namespace std;

int main ()
{
         ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);

         ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    while(q--){
	char arr[100005];
	//getline (cin, str);
  cin.getline(arr,100);
	 /*int counter=0,m=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]!=' ')
            {counter++;m=max(counter,m);}
            else
            {
                counter=0;
            }
        }
        m=max(counter,m);
      //  cout<<str<<endl;
      cout<<m<<endl;
        string arr;
        counter=0;
         for(int i=0;i<str.size();i++)
        {
            if(str[i]!=' ')
            {
            arr+=str[i];
            }
            else
            {
                if(arr.size()==m)cout<<arr<<" ";
                arr={""};
            }
        }
        if(arr.size()==m)cout<<arr;
        cout<<str<<endl;
       cout<<endl;*/
       cout<<arr;
    }

}




