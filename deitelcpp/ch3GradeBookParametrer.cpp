#include <iostream>
#include <string>
using namespace std;

class GradeBook//Define una clase
{
public:
  void displayMessage( string courseName) const// se pide un parametro courseName para hacer uso de displayMessage
  {
    cout << "Welcome to the grade book for " << endl;
    cout << courseName << endl;
  }
};

int main()
{
  string courseName;// declara un string
  GradeBook myGradeBook;//declara un objeto GradeBook

  cout << "Please enter the course name" << endl;
  getline(cin,courseName);//pide una cadena string
  cout << endl;
  myGradeBook.displayMessage(courseName); // se entrega la cadena a la funcion displayMessage
}
