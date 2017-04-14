/* Este programa utiliza funciones
para obtener los precios de 2 items y sus respectivos descuentos, luego
muestra el precio normal de cada producto*/

#include <iostream>
using namespace std;

void displayMessage(double price, double dsct , double retailPrice)
{
  cout << "El precio ingresado fue " << price << endl;
  cout << "El dscto de etiqueta ingresado fue " << dsct * 100 <<endl;
  cout << "El precio en tienda normal del producto es " << retailPrice <<endl;
}
double getItem()
{
  double price;
  cout << "Ingresa el precio" << endl;
  cin>>price;
  return price;
}
double getDsct()
{
  double dsct;
  cout << "Ingresa el % de descuento en la etiqueta"<< endl;
  cin >> dsct;
  return dsct/100;
}

double calculateRetail ( double price , double dsct)
{
  double retailPrice;
  retailPrice = price * ( 1 + dsct);
  return retailPrice;
}

int main()
{
  double item1,item1_dsct,
         item2,item2_dsct,
         item1_fullprice,
         item2_fullprice;
  item1 = getItem();
  item1_dsct = getDsct();
  item1_fullprice = calculateRetail ( item1 , item1_dsct);
  displayMessage(item1,item1_dsct,item1_fullprice);

  cout << endl;

  item2 = getItem();
  item2_dsct = getDsct();
  item2_fullprice = calculateRetail ( item2 , item2_dsct);
  displayMessage(item2,item2_dsct,item2_fullprice);



  return 0;


}
