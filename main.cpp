#include <iostream>
using namespace std;

// <-- ADD YOUR FUNCTION PROTOTYPE HERE
void swapNumbers(int&,int&,int&);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA


  // <-- ADD YOUR FUNCTION CALL HERE
  swapNumbers(red, green, blue);

  

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

// <-- ADD YOUR FUNCTION DEFINITON HERE
void swapNumbers(int &a,int &b,int &c)
{
    int temp;
    if(b>a)
    {
       temp = b;
       b = a;
       a = temp;
    }
    if(c>a)
    {
        temp = c;
        c = a;
        a = temp;
    }
    if(c>b)
    {
        temp = c;
        c = b;
        b = temp;
    }
}
