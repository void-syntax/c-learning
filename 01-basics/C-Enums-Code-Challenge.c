#include <stdio.h>

enum Day { SUN, MON, TUE, WED, THU, FRI, SAT };

int main() {
    enum Day today;
  // 1) Declare the enum variable here
    today = MON;
  // 2) Set the value here
    printf("%d", today);
  // 3) Print the value here
  return 0;
}
