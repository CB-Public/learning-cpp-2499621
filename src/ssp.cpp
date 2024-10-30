#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
  system("cls");

  int user;
  bool finish = false;

  while (!finish)
  {

    srand(time(0));
    int bot = rand() % 3 + 1;

    cout << "Eingabe User zw 1 und 3: " << endl;
    cin >> user;

    if (user < 1 || user > 3)
    {
      cout << "Falsch, erneute Eingabe: " << endl;
      cout << "" << endl;
    }

    if (user == 1 && bot == 1)
    {
      cout << "Unentschieden" << endl;
      cout << "" << endl;
    }

    if (user == 2 && bot == 1)
    {
      cout << "Gewonnen" << endl;
      cout << "" << endl;
    }

    if (user == 2 && bot == 2)
    {
      cout << "Unentschieden" << endl;
      cout << "" << endl;
    }

    if (user == 3 && bot == 1)
    {
      cout << "Gewonnen" << endl;
      cout << "" << endl;
    }

    if (user == 3 && bot == 2)
    {
      cout << "Gewonnen" << endl;
      cout << "" << endl;
    }

    if (user == 3 && bot == 3)
    {
      cout << "Unentschieden" << endl;
      cout << "" << endl;
    }

    if (user == 1 && bot == 3)
    {
      cout << "Lose" << endl;
      cout << "" << endl;
    }

    if (user == 2 && bot == 3)
    {
      cout << "Lose" << endl;
      cout << "" << endl;
    }

    if (user == 1 && bot == 2)
    {
      cout << "Lose" << endl;
      cout << "" << endl;
    }
  }

  return 0;
}