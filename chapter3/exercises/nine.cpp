//Este programa lleva un numero deletetreado a su simbolo numerico (zero >> 0) ... para los 4 primeros numeros
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string wordnum;

  cout << "Escriba un numero como cero,uno...."<< endl;
  while(getline(cin,wordnum)){
  if (wordnum=="cero" || wordnum=="zero"){cout<<0 << endl;}
  if (wordnum=="uno" || wordnum=="one"){cout<<1 << endl;}
  if (wordnum=="dos" || wordnum=="two"){cout<<2 << endl;}
  if (wordnum=="tres" || wordnum=="three"){cout<<3 << endl;}
  else{cout<<"No se de ese numero!"<<endl;}
}

  return 0;
}
