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
      if(numa>numb)
      {
        cout << "El numero" << numa  << "es meyor que "<<numb<< endl;
      }
      else if (numb<numa)
      {
        cout << "El numero" << numb  << "es meyor que "<<numa<< endl;
      }

    }
    else
    {
      cout << "Se termino!" << endl;
    }
  }
  return 0;
}
