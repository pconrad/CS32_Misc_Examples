#include "DayOfYear.h"
#include <iostream>
using namespace std;

int main() {
  DayOfYear christmasEve(12,24);
  DayOfYear birthday(12,24);
  DayOfYear halloween(10,31);

  cout << "equal(christmasEve,birthday)="
       << DayOfYear::equal(christmasEve,birthday)
       <<  endl;

    cout << "equal(christmasEve,halloween)="
	 << DayOfYear::equal(christmasEve,halloween)
       <<  endl;
}
