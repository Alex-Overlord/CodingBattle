#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () 
{
  int pont, nb;
  int repere;
  bool recouvre = true;
  bool itv = false;
  cin >> pont >> nb;
  
  int* pos = new int[nb];
  int* rayon = new int[nb];

  for (int i=0 ; i<nb ; i++) {
    cin >> pos[i];
  }
  for (int j=0 ; j<nb ; j++) {
    cin >> rayon[j];
  }

  repere = 0;
  for (int k=0 ; k<nb ; k++) {
    for (int l=0 ; l<nb ; l++) {
      if (pos[l]+rayon[l] >= repere
    }
    repere = pos[k];
  }

}
