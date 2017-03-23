#include <iostream>
using namespace std;

int main()
{
  int numa,numb;
  cout << "Ingresa 2 numeros" << endl;
  while(cin>>numa>>numb)
  {
    if (numa!='|' && numb!='|')
    {
      cout << numa << endl;
      cout << numb << endl;
    }
    else
    {
      cout << "Se termino!" << endl;
    }
  }
  return 0;
}
