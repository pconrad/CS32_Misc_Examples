#ifndef _DAY_OF_YEAR_H
#define _DAY_OF_YEAR_H

class DayOfYear {

 public:
  DayOfYear(int month, int day) {
    this->month = month;
    this->day = day;
  }

  static bool equal(DayOfYear d1, DayOfYear d2) {
    return d1.month==d2.month && d1.day == d2.day;
  }

 private:
  int month;
  int day;

};


#endif
