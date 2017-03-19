//Este programa pide 3 numeros enteros y los muestra de forma ordenada
#include <iostream>
using namespace std;
int main ()
{
  int a,b,c;
  cout << "Ingrese 3 numeros" << endl;
  cin >> a;
  cin >> b;
  cin >> c;

  if (a<=b)
  {
    if (b<=c)
    {
      cout << a <<","<< b << "," << c << endl;
    }
    else
    {
      cout << a <<","<< c << "," << b << endl;
    }
  }
  if (a>=b)
  {
    if (b>=c)
    {
      cout << c <<","<< b << "," << a << endl;
    }
    else
    {
      cout << b <<","<< c << "," << a << endl;
    }
  }


  return 0;

}
