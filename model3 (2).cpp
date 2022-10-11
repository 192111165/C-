#include <iostream>
using namespace std;

class shape
{
  public:
  shape()
  {
  cout<<"\t This is Shape"<<endl; 
  }
};
class polygon:public shape
{
	public:
		polygon()
		{
			cout<<"\t polygon is a shape"<<endl;
		}
};
class rectangle :public polygon
{
  public:
  rectangle()
  {
  cout<<"\t rectangle is a polygon "<<endl;
  }
};
class triangle :public rectangle
{
  public:
  triangle()
  {
   cout<<"\t Triangle is a polygon"<<endl;
  }
};
class square :public triangle
{
  public:
  square()
  {
  cout<<"\t Square is a rectangle"<<endl; 
  }
};
int main()
{
 square s;
}
