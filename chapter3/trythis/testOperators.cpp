#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
  cout << "Ingresa un numero" << endl;
  double num;
  cin >> num;

  cout << "tu num + 1 es " << num+1 << endl;
  cout << "3 veces tu num es " << num*3 << endl;
  cout << "2 veces tu num es " << num*2 << endl;
  cout << "El cuadrado de tu num es " << num*num <<endl;
  cout << "La mitad de tu num es " << num/2 << endl;
  cout << "La raiz cuadrada de tu num es " << sqrt(num) << endl;
  return 0;

}
