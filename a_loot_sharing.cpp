#include <iostream>
#include <string>
using namespace std;

int main ()
{
  int B, T, N;

  cin >> B;
  cin >> T;
  cin >> N;

  if (B*2 + T*3 <= N) {
    cout << "LOOT!";
  } else {
    cout << "RHUM!";
  }

  return 0;
}
