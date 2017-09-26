#include <iostream>

using namespace std;

class Core
{
public:
  char pole[250][250];
  float get_lokalizacja(char pole[250][250], int dlugosc);
  bool kolizja();
}
