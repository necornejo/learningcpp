#include <iostream>
#include <string>
using namespace std;

int main()
{
  string first_name,
         friend_name;
  char friend_sex = '0';
  char request;

  cout << "Dime tu nombre" << endl;
  getline(cin,first_name);
  cout << "Hola...." << first_name << " Hace mucho que no se de ti" << endl;
  cout << "\tDime como esta todo??"<< endl;
  cout << "Oye, recuerdo que teniamos un amigo en comun ¿Recuerdas su nombre?" << endl;
  getline(cin,friend_name);
  cout << friend_name << " era su nombre cierto!!!" << endl;
  cout << "Oye y..." << friend_name << "era hombre (h) o mujer(m)" << endl;
  cin >> request;
  if (request=='h') cout<<"Si lo ves dile a ese tipo que me de una llamada!!!"<<endl;
  if (request=='m') cout<<"Siempre estuve enamorada de ella"<<endl;

  return 0;
}
