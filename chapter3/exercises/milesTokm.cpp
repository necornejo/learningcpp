#include <iostream>
using namespace std;

int main()
{
  const double km_per_mile = 1.609;
  double mile;
  cout << "Te ayudare a convertir de millas a kilometros" << endl;
  cout << "Ingresa las millas a convertir y presionar ENTER" << endl,
  cin >> mile;
  cout << mile << " en km es equivalente a..." << mile*km_per_mile << endl;
  return 0;
}
