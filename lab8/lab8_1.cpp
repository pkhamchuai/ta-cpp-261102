#include <iostream>
using namespace std;

int main()
{
  char rank;
  int number;
  cout << "Input your rank: ";
  cin >> rank;
  if(rank == 'S'){
    number = 5;
  } else if(rank == 'A'){
    number = 4;
  } else if(rank == 'B'){
    number = 3;
  } else if(rank == 'C'){
    number = 2;
  } else if(rank == 'D'){
    number = 1;
  }

  if(number > 4){
    cout << "You have received Super Ultra Rare Unit!!!\n";
  } if(number > 3){
    cout << "You have received 5 gems.\n";
  } if(number > 2){
    cout << "You have received 1 gems.\n";
  } if(number > 1){
    cout << "You have received 2000 coins.\n";
  } if(number > 0){
    cout << "You have received very KAK items.\n";
  }
  return 0;
}
