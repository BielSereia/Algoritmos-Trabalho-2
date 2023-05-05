#include <iostream>
#include <time.h>
using namespace std;

int main() {
  srand(time(NULL));

  int exit = 1;

  do {
    int input;

    cout << "\n1 - Sair.\n";
    cout << "2 - Sobre.\n";
    cout << "3 - Jogar.\n";
    cin >> input;

    switch (input) {
    case 1:
      exit = 0;
      system("clear");
      break;
    case 2:
      cout << "\nArthur Queiroz, Victor Menezes Ferreira, Gabriel Antônio "
              "Sereia, Felipe Pardauil - Maio/2023 - Rafael Ballottin "
              "Martins.\n";
      break;
    case 3:
      system("clear");

      int a, b, c, d;

      do {
        a = rand() % 6 + 1;
        b = rand() % 6 + 1;
        c = rand() % 6 + 1;
        d = rand() % 6 + 1;
      } while (a == b || a == c || a == d || b == c || b == d || c == d);

      // teste dos números aleatórios
      // cout << a << endl;
      // cout << b << endl;
      // cout << c << endl;
      // cout << d << endl;

      break;
    default:
      break;
    }
  } while (exit == 1);
}
