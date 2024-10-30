#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  int array[5] = {};

  for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
  {
    array[i] = i * 3;

    if (array[i] >= 6)
    {
      cout << "Arraywert: " << array[i] << endl;
    }
  }

  // cout << "" << endl;
  // cout << "" << endl;

  // int a = 10;
  // int b = 2;

  // while (a > b)
  // {
  //   a++;
  //   b = b + 2;

  //   cout << "Neue Runde:" << endl;
  //   cout << "A: " << a << endl;
  //   cout << "B: " << b << endl;
  //   cout << "" << endl;
  // }

  cout << "" << endl;
  cout << "" << endl;

  string eingabe;
  cout << "Bitte eingeben: " << endl;
  cin >> eingabe;
  cout << "Das ist die Eingabe: " << eingabe << endl;

  return 0;
}