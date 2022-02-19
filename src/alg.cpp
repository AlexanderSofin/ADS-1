// Copyright 2022 NNTU-CS
#include "alg.h"
#include <cstdint>

#include <cmath>
#include <climits>

bool checkPrime(uint64_t value) {
// вставьте код функции
  bool isPrime = true;
    uint64_t del = sqrt ( value );
    if ( ( value % 2 == 0 && value != 2 ) || value < 2 ) isPrime = false;
    for ( int i = 2 ; i <= del ; i++ ) {
        if ( value % i == 0 ) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
  uint64_t count = 0;
    uint64_t i = 0;
        for ( int j = 2 ; j <= ULONG_MAX ; j++ ) {
            if (checkPrime(j)) {
                i += 1;
                if ( i == n ) {
                    count = j;
                    break;
                }
            }
        }
        return count;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
  uint64_t res = 0;
    for ( uint64_t i = value + 1 ; i <= ULONG_MAX ; i++ ) {
        if (checkPrime(i)) {
            res = i;
            break;
        }
    }
    return res;
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
  uint64_t res = 0;
    for ( uint64_t i = 2 ; i < hbound ; i++ ) {
        if ( checkPrime(i) ) {
            res += i;
        }
    }
    return res;
}
