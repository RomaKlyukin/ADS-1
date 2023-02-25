// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  uint64_t col = 0;
  for (int sc = value; sc >= 1; sc--) {
    if ((value % sc) == 0) {
      col += 1;
    }
  }
  if (col == 2) {
    return true;
  } else {
    return false;
  }
}

uint64_t nPrime(uint64_t n) {
  uint64_t num_Prime = 0, sc = 1;
  do {
    if (checkPrime(sc) == true) {
      num_Prime += 1;
    }
    if (num_Prime == n) {
      return sc;
    }
  sc += 1;
  } while (sc > 0);
  return 0;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t sc = value + 1;
  do {
    if (checkPrime(sc) == true) {
      return sc;
    }
  sc += 1;
  } while (sc > 0);
  return 0;
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sc = 1, sum = 0;
  do {
    if (checkPrime(sc) == true) {
      sum += sc;
    }
  sc += 1;
  } while (sc < hbound);
  return sum;
}
