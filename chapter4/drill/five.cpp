#include <iostream>
using namespace std;

int main()
{
  double a,b;
  while(cin >> a >> b)
  {
    if(a == b) { cout << "Son iguales !" << endl;}
    else if (a>b)
    {
      if((a-b)<=10) {cout << b << "Es casi igual a " << a << endl;}
      else {cout << a << " es mayor" << endl;}
    }

    else if (b>a)
    {
      if((b-a)<=10) {cout << a << "Es casi igual a " << b << endl;}
      else {cout << b << " es mayor" << endl;}
    }


  }
  return 0;
}
