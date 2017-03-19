//Este programa pide 3 numeros enteros y los muestra de forma ordenada
#include <iostream>
#include <string>
using namespace std;
int main ()
{
  string a,b,c;
  cout << "Ingrese 3 palabras" << endl;
  getline(cin,a);
  getline(cin,b);
  getline(cin,c);

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
