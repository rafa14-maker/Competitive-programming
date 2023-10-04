#include<iostream>

using namespace std;

class circle
{
	private:
      float radious;

        const float pi=3.142;

    public:

	circle(float r)
	{
		radious = r;
		}
	 float calarea()
      {

          return pi*radious;
          ;
      }
      float parameter()
      {

        return 2*pi*radious;
        }
		  ~circle()
      {
          cout<<"object detructed"<<endl;
      }
};
int main()
{


circle coffee(6.00);

coffee.parameter();

coffee.calarea();


}
