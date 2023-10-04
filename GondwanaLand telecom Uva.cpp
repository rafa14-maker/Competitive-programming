#include<bits/stdc++.h>
using namespace std;

int main()
{
    char type;
    const float costs[5][3]={
        {0.1,0.06,0.02},{0.25,0.15,0.05},{0.53,0.33,0.13},
        {0.87,0.47,0.17},{1.44,0.8,0.3}
    };

    while(1)
    {
        cin>>type;
        if(type=='#')break;
        int hend;
        int mend;
        int hstart;
        int mstart;
        string number;
        cin>>number>>hstart>>mstart>>hend>>mend;
        if(hend<hstart||(hstart==hend&&mend<=mstart))
        {
            hend+=24;
        }
        int minutes[3]={0,0,0};
        int endminutes=hend*60+mend;
        int startminutes = hstart*60+mstart;

        for(int t=0;t<=2880;t++)
        {
            if(startminutes<t&&t<=endminutes)
            {
                if((t>=0&&t<=480)||(t>=1321&&t<=1920)||(t>=2761&&t<=3360))
                {
                    ++minutes[2];
                }
                else if((t>=1081&&t<=1320)||(t>=2521&&t<=2760))minutes[1]++;
                else minutes[0]++;
            }
        }
        double total = 0;
		cout << setfill(' ') << setw(10) << number;
		for (int i = 0; i < 3; ++i)
		{
			cout << setfill(' ') << setw(6) << minutes[i];
			total += minutes[i] * costs[type - 'A'][i];
		}

		cout << "  " << type << setfill(' ') << setw(8) << fixed << setprecision(2) << total << "\n";


  }
}
