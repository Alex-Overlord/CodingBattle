#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () 
{
  int pont, nb;
  int itv=0;
  cin >> pont >> nb;
  
  int* pos = new int[nb];
  int* rayon = new int[nb];
  
  for (int i=0 ; i<nb ; i++) {
    cin >> pos[i];
  }
  for (int i=0 ; i<nb ; i++) {
    cin >> rayon[i];
  }
  
  itv = pos[0] + rayon[0];
  for (int i = 1; i < nb-1; ++i) {
    itv += abs((pos[i] + rayon[i]) - ((pos[i+1] - rayon[i+1])));
  }
  itv += abs((rayon[nb-1] + rayon[nb-1]) -pont);
  
  if ((pont- itv)<=0) {
    cout << "YES";
  } 
  else {
    cout << "NO";
  }
  return 0;
}
