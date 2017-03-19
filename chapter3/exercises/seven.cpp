//Este programa determina si un numero ingresado es par o impar usando "%" modulo
#include <iostream>
using namespace std;
int main ()
{
  int num;
  cout << "Ingresa un numero para determinar si es par o impar" << endl;
  cin >> num;
  if (num%2==0)
  {
    cout << "el numero " << num << " es par"<< endl;
  }
  else
  {
    cout << "el numero " << num << " es impar" << endl;
  }
  return 0;

}
