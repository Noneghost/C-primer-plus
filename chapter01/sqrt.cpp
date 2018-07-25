#include <iostream>
#include <cmath>    // 如果是老式编译器。则使用 math.h

int main(void)
{ 
  using namespace std;
  
  double area;
  cout << "Enter the floor area , in squre feet, of your home: ";
  cin >> area;
  double side;
  side = sqrt(area);
  cout <<"That's the  equivalent of a square " <<side
       <<" feet to the side. "<< endl;
  cout << "How fascinating!"<<endl;
  
  return 0;
}
