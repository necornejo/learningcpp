//Este programa convierte de dollares a  euros y viceversa
#include <iostream>
using namespace std;

int main()
{
  const double dollar_per_euro = 1.12;
  const double euro_per_dollar = 0.89;
  double amount;
  char money_type=' ';

  cout << "Ingresa el monto seguido del tipo de moneda EURO(E) DOLLAR(D)" << endl;
  cin >> amount >> money_type;

  if (money_type=='E' || money_type=='e')
  {
    cout << "El monto en dolares de " << amount << " es " << amount*euro_per_dollar<< endl;
  }

  else if (money_type=='D' || money_type=='d')
  {
    cout << "El monto en euros de " << amount << " es " << amount*dollar_per_euro<< endl;
  }
  return 0;
}
