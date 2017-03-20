//Este programa crea una funcion CUADRADO y luego la utilizando
#include <iostream>
using namespace std;
int cuadrado(int value)
{
  int total = 0;
  for (int i = 1;i<=value;++i) //punto de corte y pasos !
  {
    total = total + value;
  }
  return total;
}

int main()
{
  int num;
  int total;
  cout << "Ingresa un numero y presiona Enter" << endl;
  cin >> num;
  total = cuadrado(num);
  cout << total << endl;
  return 0;

}
