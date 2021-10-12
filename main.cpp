#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {
  srand(time(NULL));
  int x=rand()%101; //random number from 0-100

  cout << "The computer thought of the number 0-100. You have 8 tries. Your number?   " << endl;
  int user_choise;
  bool flag=false;

  for(int i=0; i<8; i++)
  {
  cin >>user_choise;
  if (x == user_choise) 
    {cout << "YOU WIN!!"; flag=true;break;};
  if (x < user_choise)
    {cout << "LESS  ";};
  if (x > user_choise)
    {cout <<"MORE  " ;};
  }
if (flag==false) {cout << endl <<"YOU LOSE!";};
return 0;
}