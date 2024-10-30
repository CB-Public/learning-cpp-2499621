#include <iostream>
using namespace std;

int main()
{
  double a = 1;
  double b = 3.2;
  char c = 'x';
  int d[5] = {};
  d[1] = 22222;
  int e = 0;

  // notiz
  cout << a + b << endl;
  cout << c << endl;
  cout << d << endl;
  cout << d[1] << endl;
  cout << "" << endl;
  cout << "" << endl;

  if (a < b)
  {
    cout << "absolut" << endl;
  }

  cout << "" << endl;
  cout << "" << endl;

  for (int index = 0; index <= 5; index++)
  {
    cout << "Indexnummer: " << index << endl;
  }

  cout << "" << endl;
  cout << "" << endl;

  for (int index = 0; index <= 5; index++)
  {
    d[index] = index * 2;
    cout << "Array: " << d[index] << endl;
  }

  cout << "" << endl;
  cout << "" << endl;



  int wh = 2;

  
  return 0;
}