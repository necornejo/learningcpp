#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  const int total_square = 64;
  double paid = 2 , total_paid = 0;
  for(int i = 0 ; i <=total_square; i+=1)
  {
    cout << "El numero de casilleros pagados es " << i << endl ;
    total_paid = pow(paid,i);
    cout << "Total pagado " << endl;
    cout << total_paid << endl;


  }

}
