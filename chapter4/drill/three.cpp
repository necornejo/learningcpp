#include <iostream>
using namespace std;

int main()
{
  int a,b;
  while(cin>>a>>b)
  {
    if(a==b)
    {
      cout << "Ambos numeros son iguales." << endl;
    }
    else if(a>b)
    {
      cout << a << "es el numero mayor" << endl;
    }
    else
    {
      cout << b << "es el numero mayor" << endl;
    }

  }
  return 0;
}
