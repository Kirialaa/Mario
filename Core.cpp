#include <iostream>
#include "Core.h"

using namespace std;

float Core::get_lokalizacja(char lokalizacja[250][250], int dlugosc)
{
  bool loc[250][250]//pierwsza wspolrzedna to X, druga Y;
  int i=0, f=0;
  int x[1000], x_tracking=0;
  int y[1000]=0, y_tracking=0;
  while(i<=dlugosc)
  {
      while(lokalizacja[x][y]!=219)//219 to waz
      {
        loc[x_tracking][y_tracking]=false;
      }
    if(lokalizacja[x][y]==219)
     lokalizacja[x_tracking][y_tracking]=true;
      x[f][f]=//Trzeba dopisac
  }
 }




void Core::kolizja()
{
  Core::get_lokalizacja(int ID)
    if()
}
