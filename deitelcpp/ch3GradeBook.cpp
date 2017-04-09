#include <iostream>// Declarativa presente en todo doc cpp
using namespace std;

class GradeBook//Definicion de la una clase
{
public://Lo cual se tiene acceso
  void displayMessage() const //Aqui se declara una funcion que no recibe parametros y es constante
  {
    cout << "Welcome to the GradeBook" << endl;
  }
};//Las clases terminan con un semicolon

int main()
{
  GradeBook myGradeBook;
  myGradeBook.displayMessage();
}
