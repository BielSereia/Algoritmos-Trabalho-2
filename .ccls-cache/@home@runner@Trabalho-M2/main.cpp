#include <iostream>
#include <time.h>

using namespace std;

int main() {
  srand(time(NULL));

  int menu = 1;

  do {
    int input;

    cout << "\n1 - Sair.\n";
    cout << "2 - Sobre.\n";
    cout << "3 - Jogar.\n";
    cin >> input;

    switch (input) {
    case 1:
      menu = 0;
      system("clear");
      break;
    case 2:
      system("clear");
      cout << "Equipe de desenvolvimento: \n";
      cout << "- Arthur Queiroz.\n";
      cout << "- Victor Menezes Ferreira.\n";
      cout << "- Gabriel Antônio Sereia.\n";
      cout << "- Felipe Pardauil.\n";
      cout << "Mês/Ano: maio/2023.\n";
      cout << "Professor: Rafael Ballottin Martins.\n";
      break;
    case 3:
      system("clear");

      int randomA, randomB, randomC, randomD;

      do {
        randomA = rand() % 6 + 1;
        randomB = rand() % 6 + 1;
        randomC = rand() % 6 + 1;
        randomD = rand() % 6 + 1;
      } while (randomA == randomB || randomA == randomC || randomA == randomD ||
               randomB == randomC || randomB == randomD || randomC == randomD);

      int tentativas;
      tentativas = 10;

      while (tentativas >= 0) {
        int inputA, inputB, inputC, inputD;

        if (tentativas == 0) {
          system("clear");
          cout << "Você perdeu.\n";
          cout << "Ultima tentativa: " << inputA << inputB << inputC << inputD
               << endl;
          cout << "O código era: " << randomA << randomB << randomC << randomD
               << endl;
          break;
        }

        cout << tentativas << " tentativas restantes.\n";

        for (int i = 1; i <= 4; i++) {
          cout << "Digite o " << i << "o numero.\n";

          switch (i) {
          case 1:
            cin >> inputA;
            break;
          case 2:
            cin >> inputB;
            break;
          case 3:
            cin >> inputC;
            break;
          case 4:
            cin >> inputD;
            break;
          default:
            break;
          }
        }

        int corretosPosicaoCorreta = 0;
        int corretosPosicaoIncorreta = 0;

        if (inputA == randomA) {
          corretosPosicaoCorreta++;
        } else if (inputA == randomB || inputA == randomC ||
                   inputA == randomD) {
          corretosPosicaoIncorreta++;
        }

        if (inputB == randomB) {
          corretosPosicaoCorreta++;
        } else if (inputB == randomA || inputB == randomC ||
                   inputB == randomD) {
          corretosPosicaoIncorreta++;
        }

        if (inputC == randomC) {
          corretosPosicaoCorreta++;
        } else if (inputC == randomA || inputC == randomB ||
                   inputC == randomD) {
          corretosPosicaoIncorreta++;
        }

        if (inputD == randomD) {
          corretosPosicaoCorreta++;
        } else if (inputD == randomA || inputD == randomB ||
                   inputD == randomC) {
          corretosPosicaoIncorreta++;
        }

        if (corretosPosicaoCorreta == 4) {
          cout << "Parabéns! Você acertou o código.\n";
          break;
        }

        cout << "Números corretos na posição correta: "
             << corretosPosicaoCorreta << endl;
        cout << "Números corretos, mas na posição incorreta: "
             << corretosPosicaoIncorreta << endl;

        tentativas--;
      }

      break;
    default:
      system("clear");
      cout << "Opção invalida. Por favor, tente novamente.\n";
      break;
    }
  } while (menu == 1);
}
