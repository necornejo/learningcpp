/* Calcular la tienda con mayores ventas mediante el uso de dos funciones getSales y findHighest*/
#include <iostream>
using namespace std;

double getSales();
void findHighest(double store1, double store2, double store3, double store4);
double sort_own(double arreglo[],int arreglo_limit);

int main()
{
  double store1,store2,store3,store4;
  cout << "Tienda 1 " << endl;
  store1 = getSales();
  cout << "Tienda 2 " << endl;
  store2 = getSales();
  cout << "Tienda 3 " << endl;
  store3 = getSales();
  cout << "Tienda 4 " << endl;
  store4 = getSales();

  findHighest(store1,store2,store3,store4);

}
double getSales()
{
  double totalSales;
  cout << "Ingresa el monto total vendido" << endl;
  cin >> totalSales;
  if(totalSales < 0)
  {
    cout << "Ingresa un monto correcto ! " << endl;
    getSales();
  }
  return totalSales;
}

void findHighest(double store1, double store2, double store3, double store4)
{
  double high;
  double storeSales[4] = {store1,store2,store3,store4};
  high = sort_own(storeSales,4);
  if(high==store1)
  {
    cout<< "La tienda 1 fue la que mas vendio con: " << high << endl;
  }
  if(high==store2)
  {
    cout<< "La tienda 2 fue la que mas vendio con: " << high << endl;
  }
  if(high==store3)
  {
    cout<< "La tienda 3 fue la que mas vendio con: " << high << endl;
  }
  if(high==store4)
  {
    cout<< "La tienda 4 fue la que mas vendio con: " << high << endl;
  }


}
double sort_own(double arreglo[],int arreglo_limit)
{
  int n = arreglo_limit;
  for(int index = 0 ; index < n ; index++)
  {
    for( int number = 1 ; number < n; number++)
    {
      if(arreglo[number-1] < arreglo[number])
      {
        int temporal = arreglo[number-1];
        arreglo[number-1] = arreglo[number];
        arreglo[number] = temporal;
      }
    }
  }
  return arreglo[0];
}
