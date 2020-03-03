#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () 
{
    int G, N, Pi, Ci;
    string Nom;
    string Mdresseur=" "; 
    int nb_perroquer=0;
    cin >> G >> N;

    while (N != 0){
        cin >> Nom >> Pi >> Ci;
        if (nb_perroquer < ((G-Ci) / Pi) ){
            nb_perroquer = ((G-Ci) / Pi);
            Mdresseur=Nom;
        }
        N--;
    }
    if (nb_perroquer == 0){
        cout << "Impossible"<<endl;
    }
    else{
        cout << nb_perroquer << endl;
        cout << Mdresseur << endl;
    }
    return 0;
}
