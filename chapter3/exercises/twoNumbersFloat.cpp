#include <iostream>
using namespace std;

int main ()
{
  double numa,numb;
  cout << "Ingresa 2 numeros !!! y presiona ENTER" << endl;
  cin >> numa >> numb;
  if (numa>numb)
  {
    cout << numa << " es mayor a " << numb << endl;
  }
  else
  {
    cout << numb << " es mayor a " << numa << endl;
  }
  cout << numa << "+" << numb << "=" << numa+numb << endl;
  cout << numa << "*" << numb << "=" << numa*numb << endl;
  cout << "El promedio de ambos numeros es " << (numa+numb)/2 << endl;
  return 0;

}
