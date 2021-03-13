/*
"You are making a program for a bus service."
"A bus can transport 50 passengers at once."
"Given the number of passengers waiting in the bus station as input, you need to calculate and output how many empty seats the last bus will have."
/**/

#include <iostream>
using namespace std;

int main() {
  int seats = 50;
  int passengers;
  cout << "Enter the number of waiting passengers:" << endl;
  cin >> passengers;

  int passengers_left = passengers % seats;
  int seats_left = seats - passengers_left;

  cout << "" << endl;

  cout << "The number of empty seats the last bus will have:" << endl;
  cout << seats_left << endl;

  cout << "" << endl;
  cout << "This was a fun start." << endl;

  return 0;
}
