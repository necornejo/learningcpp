/* Escribe un programa que adivine el numero.
El usuario debera pensar un numero entre 1 y 100
y tu programa debera hacer preguntas para adivinar dicho numero.
OJO EL PROGRAMA NO DEBERA TENER MAS DE 7 preguntas
*/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main ()
{
  string next;
  //Creamos un vector que contenga los 100 posibles numeros
  vector<int>list_numbers;
  for(int x=1; x<=100;++x)
  {
    list_numbers.push_back(x);
  }

  //Declaramos una variable NEXT para que continue la ejecucion de preguntas


  int guess_number;
  cout << "Bienvenido Usuario !" << endl;
  cout << "Piensa en un numero entre 1 - 100 y tratare de adivinarlo!!" << endl;
  cout << "Empezemos .... " << endl;
  cout << "Tu numero es menor o mayor a 50 ?" << endl;
  getline(cin,next);

  //Si el numero es menor a 50 se ejecuta el siguiente bloque
  if (next == "Menor" || next == "MENOR" || next == "menor")
  {
    cout << "Vaya !! y tu numero es mayor o menor a 25 ??" << endl;
    getline(cin,next);
    //Si el numero es menor a 25 se ejecuta el siguiente bloque
    if (next == "Menor" || next == "MENOR" || next == "menor")
    {
      cout << "Vaya !! y tu numero es mayor o menor a 13 ??" << endl;
      getline(cin,next);
      //Si el numero es menor a 13 se ejecuta el siguiente bloque
      if (next == "Menor" || next == "MENOR" || next == "menor")
      {
        cout << "Vaya !! y tu numero es mayor o menor a 7 ??" << endl;
        getline(cin,next);
        //Si el numero es menor a 7 se ejecuta el siguiente bloque
        if (next == "Menor" || next == "MENOR" || next == "menor")
        {
          cout << "Vaya !! y tu numero es mayor o menor a 3 ??" << endl;
          getline(cin,next);
          //Si el numero es menor a 3 se ejecuta el siguiente bloque
          if (next == "Menor" || next == "MENOR" || next == "menor")
          {
          
          }

        }

      }

    }

  }
  //fin del bloque

  //Si el numero es mayor a 50 se ejecuta el siguiente bloque

  return 0;

}
