#include <iostream>
#include <string>
using namespace std;

int main()
{
  cout << "Por favor ingresa tu nombre y tu edad " << endl;
  string name;
  double age;
  getline(cin,name);
  cin >> age;
  cout << "Hola..." << name << endl;
  cout << "Tu haz vivido "<< age*12 << " Meses." << endl;
  return 0;

}
