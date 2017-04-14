/* Este programa calcula la energia kinetica mediante el uso de funciones
-----Los datos de masa y velocidad seran ingresados por el usuario ....
*/
#include <iostream>
using namespace std;

double kineticEnergy(double mass , double velocity);
double getMass();
double getVelocity();

int main()
{
  double mass , velocity;
  mass = getMass();
  velocity = getVelocity();
  cout << "La energia kinetica es " << kineticEnergy(mass,velocity)<< endl;


}

double kineticEnergy(double mass , double velocity)
{
  return 0.5* mass * velocity * velocity;
}
double getMass()
{
  double mass;
  cout << "Ingrese la masa " << endl;
  cin >> mass;
  return mass;
}
double getVelocity()
{
  double velocity;
  cout << "Ingrese la masa " << endl;
  cin >> velocity;
  return velocity;
}
