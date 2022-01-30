// Plays Rock, Paper, Scissors with the computer

#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
  srand(time(NULL));
  int computer = rand() % 3 + 1;
  int user = 0;

  cout << "Rock Paper Scissors!\n";
  cout << "1) R\n" << "2) P\n" << "3) S\n";
  cout << "Shoot!\n";
  cin >> user;

  cout << "The computer has: ";
  if(computer == 1)
    cout << "R\n";
  else if(computer == 2)
    cout << "P\n";
  else
    cout << "S\n";

  switch(user){
    case 1:
      if(computer == 3)
        cout << "R  beats S . YOU WIN!\n";
      else if(computer == 1)
        cout << "It's a TIE!\n";
      else
        cout << "P  beats R . YOU LOST!\n";
      break;
    case 2:
      if(computer == 1)
        cout << "P  beats R . YOU WIN!\n";
      else if(computer == 2)
        cout << "It's a TIE!\n";
      else
        cout << "S  beats P . YOU LOST!\n";
      break;
    case 3:
      if(computer == 1)
        cout << "R  beats S . YOU LOST!\n";
      else if(computer == 3)
        cout << "It's a TIE!\n";
      else
        cout << "S  beats P . YOU WIN!\n";
      break;
  }

}