/* Este programa imprime la conversion de farenheit a celcius en una tabla*/
#include <iostream>
using namespace std;

void displayMessage ( double farenheit );
double celciusConvert ( double farenheit);

int main()
{
  cout <<"Farenheit   Celcius" << endl;
  for(int x = 0 ; x < 20 ; x++)
  {
    displayMessage( x );
  }

}

double celciusConvert (double farenheit)
{
  return (farenheit - 32)*5/9;
}

void displayMessage ( double farenheit )
{
  cout << farenheit << "\t" << celciusConvert(farenheit) << endl;
}
