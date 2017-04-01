#include <iostream>
#include <vector>
using namespace std;

int main()
{
  /*Juego piedra papel o tijera utilizando vectores*/
  const char game_rock='1',
             game_paper='2',
             game_scissor='3';
        char user_input=' ';
  vector<char>machine_choice={'1','1','3','2','2','2','1','3','2','1'};
  for(char i : machine_choice)
  {
    cout << "1...Piedra\n2...Papel\n3...Tijera"<<endl;
    cin >> user_input;
    if(user_input==i)
    {
      cout << "La maquina escogio " << i << endl;
      cout << "EMPATE" << endl;
    }
    else if(user_input == '1' && i == '2')
    {
      cout << "La maquina escogio " << i << endl;

      cout<<"Gana la maquina"<< endl;
    }
    else if(user_input == '2' && i == '1')
    {
      cout << "La maquina escogio " << i << endl;

      cout << "Gana el usuario" << endl;
    }
    else if(user_input == '3' && i == '1')
    {



      cout << "La maquina escogio " << i << endl;

      cout << "Gana la maquina" << endl;
    }
    else if (user_input == '1' && i == '3')
    {
      cout << "La maquina escogio " << i << endl;

      cout << "Gana el usuario" << endl;
    }
    else if(user_input == '2' && i == '3')
      {
        cout << "La maquina escogio " << i << endl;

        cout << "Gana el maquina" << endl;
      }
    else if(user_input == '3' && i == '2')
    {
      cout << "La maquina escogio " << i << endl;

      cout << "Gana el usuario" << endl;
    }
  }

}
