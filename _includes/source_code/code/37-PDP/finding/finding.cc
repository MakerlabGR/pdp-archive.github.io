#include "findinglib.h"

#include <iostream>

int main() {
   bool more_testcases = true;
   while (more_testcases) {
      int d1 = query(1);
      int d2 = query(d1/2 + 1);
      
      int A = (d1 - d2) / 2 + 1;
      int B = (d1 + d2) / 2 + 1;
      more_testcases = answer(A, B);
   }
   return true;
}
