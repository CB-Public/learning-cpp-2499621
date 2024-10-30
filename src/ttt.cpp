#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
using namespace std;

char zeichen(int wert)
{
  if (wert == 0)
  {
    return ' ';
  }

  if (wert == 1)
  {
    return 'x';
  }

  if (wert == 2)
  {
    return 'o';
  }
}

void ausgabe(int array[])
{
  cout << zeichen(array[0]) << " | " << zeichen(array[1]) << " | " << zeichen(array[2]) << endl;
  cout << "----------" << endl;
  cout << zeichen(array[3]) << " | " << zeichen(array[4]) << " | " << zeichen(array[5]) << endl;
  cout << "----------" << endl;
  cout << zeichen(array[6]) << " | " << zeichen(array[7]) << " | " << zeichen(array[8]) << endl;
}

bool areVectorsEqual(const vector<int> &v1, const vector<int> &v2)
{
  if (v1.size() != v2.size())
  {
    return false;
  }

  for (size_t i = 0; i < v1.size(); ++i)
  {
    if (v1[i] != v2[i])
    {
      return false;
    }
  }

  return true;
}

bool gewinnabfrage(int array[], int wert)
{
  //
  //
  // Zeilen
  if (array[0] == wert && array[1] == wert && array[2] == wert)
  {
    return true;
  }

  else if (array[3] == wert && array[4] == wert && array[5] == wert)
  {
    return true;
  }

  else if (array[6] == wert && array[7] == wert && array[8] == wert)
  {
    return true;
  }

  //
  //
  // Spalten
  else if (array[0] == wert && array[3] == wert && array[6] == wert)
  {
    return true;
  }

  else if (array[1] == wert && array[4] == wert && array[7] == wert)
  {
    return true;
  }

  else if (array[2] == wert && array[5] == wert && array[8] == wert)
  {
    return true;
  }

  //
  //
  // Diagonale
  else if (array[0] == wert && array[4] == wert && array[8] == wert)
  {
    return true;
  }

  else if (array[2] == wert && array[4] == wert && array[6] == wert)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  bool check = true;
  bool checkUser = false;
  bool checkBot = false;
  const int size = 9;
  int array[size] = {};

  while (check)
  {
    system("cls");
    ausgabe(array);

    srand(time(0));
    int bot = rand() % 9;

    int user;
    cin >> user;

    //
    //
    //
    //
    //
    //
    //
    // Users turn
    if (array[user] == 0)
    {
      checkUser = true;
      array[user] = 1;
      system("cls");
      ausgabe(array);

      if (gewinnabfrage(array, 1))
      {
        cout << "User hat gewonnen" << endl;
        check = false;
        break;
      }
      system("pause");
    }

    if (array[user] >= 0 && array[user] < size && checkUser == false)
    {
      cout << "Stelle bereits besetzt: Waehle eine andere" << endl;
      bool tempCheckUser = false;

      while (!tempCheckUser)
      {
        system("cls");
        ausgabe(array);

        cin >> user;
        if (array[user] >= 0 && array[user] < size)
        {
          array[user] = 1;
          tempCheckUser = true;
          checkUser = true;
          cout << "Neue Stelle platziert, User.." << endl;
          if (gewinnabfrage(array, 1))
          {
            cout << "User hat gewonnen" << endl;
            check = false;
            break;
          }
          system("pause");
        }
        else
        {
          cout << "Geht nicht, bitte neu..." << endl;
          system("pause");
        }
      }

      system("pause");
    }

    //
    //
    //
    //
    //
    //
    //
    // Bots turn
    if (array[bot] == 0)
    {
      checkBot = true;
      array[bot] = 2;
      system("cls");
      ausgabe(array);
      if (gewinnabfrage(array, 2))
      {
        cout << "Bot hat gewonnen" << endl;
        check = false;
        break;
      }
      system("pause");
    }

    if (array[bot] >= 0 && array[bot] < size && checkBot == false)
    {
      bool tempCheckBot = false;
      while (!tempCheckBot)
      {
        system("cls");
        ausgabe(array);

        srand(time(0));
        int bot = rand() % 9;

        if (array[bot] >= 0 && array[bot] < size)
        {
          array[bot] = 2;
          tempCheckBot = true;
          checkBot = true;
          cout << "Neue Stelle platziert, Bot.." << endl;
          if (gewinnabfrage(array, 2))
          {
            cout << "Bot hat gewonnen" << endl;
            check = false;
            break;
          }
          system("pause");
        }
        else
        {
          cout << "Geht nicht, bitte neu..." << endl;
          system("pause");
        }
      }
    }

    //
    //
    //
    //
    //
    //
    // wenn beide Züge vorbei sind
    if (checkUser && checkBot)
    {
      checkUser = false;
      checkBot = false;
    }
  }

  return 0;
}