/* Calculando una ecuacion cuadratica*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
  double value_a,
       value_b,
       value_c,
       solution_one,
       solution_two,
       discriminante,
       discriminante_sqrt;
  cout << "Bienvenido te ayudare a resolver una ecuacion cuadratica" << endl;
  cout << "De forma ax^2 + bx + c " << endl;
  cout << "**************" << endl;
  cout << "Ingresa el valor para (a)" <<endl;
  cin  >> value_a;
  cout << "Ingresa el valor para (b)" <<endl;
  cin  >> value_b;
  cout << "Ingresa el valor para (c)" <<endl;
  cin  >> value_c;
  discriminante = pow(value_b,2)-(4*value_a*value_c);
  discriminante_sqrt = sqrt(discriminante);
  if(discriminante < 0)
  {
    cout << "No tiene solucion" << endl;
  }
  else if(discriminante>=0)
  {
    solution_one = ((value_b*-1) + discriminante_sqrt)/2*value_a;
    solution_two = ((value_b*-1) - discriminante_sqrt)/2*value_a;
  }
  cout << solution_one << " o " << solution_two << endl;
}
