//Utilizando while
#include <iostream>
using namespace std;
int main()
{
  char letter = 'a';

  while(letter<=122)
  {
    cout << letter << "\t" << static_cast<int>(letter) << endl;
    // Utilizando static_cast para obtener el valor entero del caracter
    ++letter;
    //sumando +1 << sirve como corte
  }
  return 0;
}
