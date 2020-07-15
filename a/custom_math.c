#include "custom_math.h"
#include <stdio.h>

signed long int factorial (int f) {
  if (f == 0) {
    return 1;
  } else {
    return f*factorial (f-1);
  }
}

int fibbonachi (int f) {
  if (f == 0) {
    return 0;
  } else if (f == 1) {
    return 1;
  } else {
      return (fibbonachi (f-1) + fibbonachi (f-2));
    }
 }
