#include <iostream>
#include "Map.h"

using namespace std;
int i=0, j=0, b=0;
bool Map::generate_map(int szerokosc, int wysokosc)
{     //generowanie pierwszej czesci
  while(i<szerokosc)
  {
  cout <<"-";
  }
  cout <<" "<<endl;
  //koniec generowania pierwszej czesci
  while(j<wysokosc && b<wysokosc )
  {
    cout <<"|"
      i=0;
      while(i<szerokosc)
      {
        cout <<" ";
      }
      cout <<"|"<<endl;
    j=0;
    b++;
  }

}
