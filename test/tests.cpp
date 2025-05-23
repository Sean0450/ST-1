// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(prime_num, isPrime1) { EXPECT_EQ(checkPrime(19), true); }

TEST(prime_num, isPrime2) { EXPECT_EQ(checkPrime(20), false); }

TEST(prime_num, isPrime3) { EXPECT_EQ(checkPrime(113), true); }

TEST(st1, nprime1) {
  constexpr auto nprime = 5;
  EXPECT_EQ(nPrime(nprime), 11);
}

TEST(prime_num, nprime2) {
  constexpr auto nprime = 7;
  EXPECT_EQ(nPrime(nprime), 17);
}

TEST(prime_num, nextPrime1) {
  constexpr auto nextprime = 29;
  EXPECT_EQ(nextPrime(nextprime), 31);
}

TEST(prime_num, nextPrime2) {
  constexpr auto nextprime = 67;
  EXPECT_EQ(nextPrime(nextprime), 71);
}

TEST(prime_num, nextPrime3) {
  constexpr auto nextprime = 673;
  EXPECT_EQ(nextPrime(nextprime), 677);
}

TEST(prime_num, sumPrime1) {
  constexpr auto nbound = 3;
  EXPECT_EQ(sumPrime(nbound), 10);
}

TEST(prime_num, sumPrime2) {
  constexpr auto nbound = 6;
  EXPECT_EQ(sumPrime(nbound), 41);
}
