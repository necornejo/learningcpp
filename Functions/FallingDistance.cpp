/*Creando una funcion para calcular la distancia recorrida
por un objeto al caer en un tiempo y gravedad establecido*/
#include <iostream>
using namespace std;

void displayMessage(double time_);
double distanceCalculator(double seconds);


int main()
{
  cout << "Segundo\t distancia recorrida"<<endl;
  for(int x = 0 ; x < 10 ; x++)
  {
    displayMessage(x);
  }

}

double distanceCalculator(double seconds)
{
  return (9.8 * seconds)*0.5;
}

void displayMessage(double time_)
{
  cout << "La distancia recorrida en " << time_ << " es " <<endl;
  cout << distanceCalculator(time_)<<" metros "<< endl;
}
