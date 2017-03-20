//utilizando for
#include <iostream>
using namespace std;
int main()
{
  char letter = 'a';
  char letterUp = 'A';
  //Utilizando for (inicio;fin;salto)
  for (letter;letter<=122;++letter)
  {
    cout << letter << "\t" << static_cast<int>(letter) << endl;
  }
  for (letterUp;letterUp<=90;++letterUp)
  {
    cout << letterUp << "\t" << static_cast<int>(letterUp) << endl;
  }
  return 0;
}
