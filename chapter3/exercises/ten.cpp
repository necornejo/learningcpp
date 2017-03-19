//Este programa toma un operador ingresa por el usuario junto a dos numeros para mostrar el resultado
#include <iostream>
#include <string>

using namespace std;
int main()
{
  string opt;
  double numa,numb;
  cout <<"Ingresa el operador y presiona Enter"<< endl;
  getline(cin,opt);
  cin >> numa;
  cin >> numb;
  if (opt=="+"){cout << numa + numb<<endl;}

  else{ // esto es como un else if en python
    if (opt=="-"){cout << numa - numb<<endl;}
    if (opt=="*"){cout << numa * numb<<endl;}
    if (opt=="/"){cout << numa / numb<<endl;}
    else{cout << "no se el resultado"<< endl;}
  }
  return 0;
}
