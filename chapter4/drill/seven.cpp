/*Este programa permite al usuario ingresar una cantidad
y un tipo de medida predeterminada para luego mostrar su conversion
total en cm. */

#include <iostream>
#include <string>
using namespace std;

int main()
{
  const double cm_per_meter = 100,
               inche_per_cm = 0.3734,
               feet_per_cm = 0.0328;
  char case_conversion=' ';//Declarado para utilizar switch
  double quantity,
         total_cm = 0,
         total_m = 0,
         total_ft = 0,
         total_inches = 0;
  string type_measure;
  bool corte = 1;

  cout << "Bienvenido te ayudare a calcular la cantidad total de centimetros que posees." << endl;
  cout << "Ingresa la cantidad y luego el tipo de medida" << endl;
  cout << "Para Metros (m)" << endl;
  cout << "Para Centimetros (cm)" << endl;
  cout << "Para Pulgadas (in)" << endl;
  cout << "Para Pies (ft)" << endl;
  cout << "Para terminar (end)" << endl;

//Inicio de ingreso de datos
  while(corte)
  {
    //Ingreso de cantidad y tipo de dato
    cout << "Ingresa la cantidad y presiona enter " << endl;
    cin >> quantity;
    cout << "Ingresa el tipo de medida y luego ENTER" << endl;

    cin>> type_measure;

    /*Aqui se compara el tipo de medida ingresada para asignar un caso para SWITCh*/

    if(type_measure=="cm" || type_measure == "CM")
    {
      case_conversion='1';
    }

    else if(type_measure=="m" || type_measure=="M")
    {
      case_conversion='2';
    }

    else if(type_measure=="in" || type_measure=="IN")
    {
      case_conversion='3';
    }

    else if(type_measure=="ft" || type_measure=="FT")
    {
      case_conversion='4';
    }

    else if(type_measure=="end")
    {
      case_conversion='5';
    }

    //Fin de asignacion de casos

/*Inicio de uso de switch
segun sea el valor de case_conversion (1,2,3 o 4) se procede a adicionar la cantidad ingresada
en su lugar correcto*/
    switch(case_conversion)
    {
      case '1'://Adiciona en total Centimetros
      total_cm+=quantity;
      break;

      case '2'://Adicion en total Metros
      total_m+=quantity;
      break;
      case '3'://Adiciona en total Pulgadas
      total_inches+=quantity;
      break;

      case '4'://Adiciona en total Pies
      total_ft+=quantity;
      break;

      case '5':// Cortar el bucle while cambiando el valor de corte de True a False
      corte = 0;
      break;

    }


  }
  // Una vez hecho el corte del bucle se muestran los datos totales ingresados en su determinada variable
  cout << "La cantidad total ingresada de metros fue " << total_m << endl;
  cout << "La cantidad total ingresada de centimetros fue " << total_cm << endl;
  cout << "La cantidad total ingresada de pulgadas fue " << total_inches << endl;
  cout << "La cantidad total ingresada de pies fue " << total_ft << endl;


  //Aqui hacemos la conversion de todas las cantidades a centimetros
  total_cm = total_cm + total_m * cm_per_meter + total_inches/inche_per_cm +total_ft/feet_per_cm;
  //Mostramos el resultado
  cout << "En total tu tienes " << total_cm << " Centimetros" << endl;

  return 0;
  /* Fin
  */
}
