#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
  int num_in;
  vector<string>numbers = {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"};
  cin>> num_in;
  if (num_in <= 9)
  {
    cout << numbers[num_in]<< endl;
  }
  return 0;
}
