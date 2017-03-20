//Este programa hace la conversion de monedas utilizando "SWITCH"
#include <iostream>
using namespace std;
int main()
{
  const double dollar_per_euro = 0.80;
  const double dollar_per_yen = 0.00888;
  const double dollar_per_sol = 0.307743;
  char money_type =' ';
  double amount;
  //Hasta aqui se declaran los tipos y variables a utilizar
  cout << "Bienvenido ingresa el monto seguido del tipo de moneda " << endl;
  cout << "\tPara soles (S)" << endl;
  cout << "\tPara dolares (D)" << endl;
  cout << "\tPara yenes (Y)" << endl;
  cin >> amount >> money_type;
  //Inicio de uso de switch
  switch (money_type)
  {
    //Prueba en cada caso para el valor que tome "MONEY_TYPE"
    case 'S':
      cout << "El monto ingresado fue " << amount << " lo que en dolares equivale a ..." << amount*dollar_per_sol << endl;
      break;
    case 'E':
      cout << "El monto ingresado fue " << amount << " lo que en dolares equivale a ..." << amount*dollar_per_euro << endl;
      break;
    case 'Y':
      cout << "El monto ingresado fue " << amount << " lo que en dolares equivale a ..." << amount*dollar_per_yen << endl;
      break;
    default:
      cout << "Desconosco ese tipo"<< endl;
      break;

  }
  //fin switch
  return 0;
}
