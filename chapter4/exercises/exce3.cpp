/*
Lee una secuencia de valores "Double" en un vector
Piensa cada valor como la distancia entre dos ciudades entre una ruta.
1 Computa e imprime la distancia total (SUMA DE TODAS LAS DISTANCIAS).
2 Encuentra e imprime la mayor y menor distancia entre 2 ciudades vecinas.
3 Encuentra e imprime la distancia media entre dos ciudades.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int size_vector; // Aqui se almacena el tamaño del vector
  vector <double> distances; // Aqui se declara el vector que contiene las DISTANCIAS
  double sum_distances = 0; // Aqui se acumulara la suma de DISTANCIAS

  cout << "Ingrese la distancia entre una ciudad y otra" << endl;
  //Ingreso de distancias mediante el uso de un "for"
  for (double distance; cin >> distance;)
  {
    distances.push_back(distance);//La funcion push_back envia el valor ingresado al final del vector
  }
  //Se adiciona cada distancia "x" en sum_distances
  for (double x : distances)
  {
    sum_distances+= x;
  }
  //Se obtiene el tamaño del vector
  size_vector = distances.size();
  //Se ordena el vector para obtener el mayor y menor de la lista
  sort(distances.begin(),distances.end());

  //Aqui se muestran los resultados del proceso
  //El total de la distancia
  cout << "La ruta ingresada tiene un total de " << sum_distances << " kilometros." << endl;
  //El elemento mayor del vector
  cout << "La distancia mas larga entre 2 ciudades ingresadas fue " <<  distances[size_vector-1]<< endl;
  //El elemento menor
  cout << "La distancia mas corta entre 2 ciudades ingresadas fue " <<  distances[0]<< endl;
  //El media de distancia entre 2 ciudades
  cout << "La distancia media entre 2 ciudades es " <<  sum_distances/size_vector << endl;


  return 0;
  //Fin
}
