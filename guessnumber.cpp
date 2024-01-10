#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;
void drawLine(int n, char symbol) {
  for (int i = 0; i < n; i++) {
    cout << symbol;
  }
  cout << endl;
}
void rules() {
  system("cls");
  cout << "\n\n";
  drawLine(80, '_');
  cout << "\t\t Rules of the game\n";
  drawLine(80, '_');
  cout << "\t1. Choose any number between 1 to 10\n";
  cout << "\t2. If you win get 10 times of money you be back.\n";
  cout << "\t3. If you bet on wrong number you will lose your be money.\n";
}

int main() {
  string playerName;
  int amount;
  int betAmount;
  int guess;
  int dice;
  char choice;

  srand(time(0));
  drawLine(60, '_');
  cout << "\n\n\n\t\t CASINO GAME \n\n\n\n";
  drawLine(60, '_');

  cout << "\n\nEnter Your Name: ";
  getline(cin, playerName);

  cout << "\n\nEnter Deposit Amount to play game: $ ";
  cin >> amount;
  do {
    system("cls");
    rules();
    cout << "\n\nYour current balance is : $ " << amount << endl;
    do {
      cout << playerName << "Enter money to bet: $ ";
      cin >> betAmount;
      if (betAmount > amount) {
        cout << "Your betting amount is more than your current balance"
             << "\nRe-enter data\n";
      }
    } while (betAmount > amount);
    do {
      cout << "Guess your number to bet between 1 to 10: ";
      cin >> guess;
      if (guess <= 0 || guess > 10) {
        cout << "Please check the number!! should be between 1 to 10"
             << "\n nRe-enter data\n";
      }
    } while (guess <= 0 || guess > 10);
    dice = rand() % 10 + 1;

    if (dice == guess) {
      cout << "\n\nGood Luck!! You won Rs." << betAmount;
      amount = amount + betAmount * 10;
    } else {
      cout << " Bad Luck this time!! You lost $ " << betAmount;
      amount = amount - betAmount;
    }
    cout << "\nThe winning number was: " << dice << endl;
    cout << "\n" << playerName << ", You have $ " << amount << endl;
    if (amount == 0) {
      cout << "You have no money to play";
      break;
    }
    cout << "\n\n --> Do you want to play again(y/n)? ";
    cin >> choice;
  } while (choice == 'Y' || choice == 'y');

  cout << "\n\n\n";
  drawLine(70, '=');
  cout << "\n\nThanks for playing game . Your balance amout is $ : " << amount
       << endl;
}
