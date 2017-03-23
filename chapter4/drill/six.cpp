#include <iostream>
using namespace std;
int main()
{
  double num_a, num_b , max=0, minor=1000;
  bool x = 1;
  while (x)
  {
    cin >> num_a;
    cin >> num_b;
    if(num_a == num_b) { cout << "Son iguales !" << endl << endl;if(num_a>=max){max = num_a; cout<<"El numero maximo hasta ahora es " << max << endl;}}
    else if (num_a > num_b)
    {
      cout << num_a << " es mayor que " << num_b << endl;
      cout << "\n";
      if (num_a>=max)
      {
        max = num_a;
        cout << "El numero maximo hasta ahora es " << max << endl;
      }
      if(num_b<minor)
      {
        minor = num_b;
        cout << endl << "El menor numero hasta ahora es " << minor << endl;
      }
    }
    else
    {
      cout << num_b << " es mayor que " << num_a << endl;
      cout << "\n";
      if (num_b>=max)
      {
        max = num_b;
        cout << "El numero maximo hasta ahora es " << max << endl;

      }
      if(num_a<minor)
      {
        minor = num_a;
        cout << endl << "El menor numero hasta ahora es " << minor << endl;
      }
    }
  }
  return 0;
}
