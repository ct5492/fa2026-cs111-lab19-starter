#include <iostream>
using namespace std;

// ---------- Part 1: factorial (Bronze) ----------
// Read this function. It has a base case and a recursive case.
int factorial(int n) {
  if (n <= 1) {      // base case: stop here
    return 1;
  }
  return n * factorial(n - 1);   // recursive case: a smaller problem
}

// ---------- Part 2: sumDigits (Silver) ----------
// TODO: write sumDigits(n) here.
// It adds up the digits of a positive number. sumDigits(472) is 4 + 7 + 2 = 13.
// Hint: n % 10 is the last digit and n / 10 is the number without it.
// What is the base case?


// ---------- Part 3: power (Gold) ----------
// TODO: write power(base, exp) here. No loops and no pow.
// power(2, 5) is 32.
// Hint: what should power(base, 0) return?


int main() {
  // Part 1: write your prediction in a comment BEFORE you run it.
  // How many times is factorial called for factorial(4)?
  // My prediction:
  cout << "factorial(4) = " << factorial(4) << endl;   // goal: 24

  // Part 2: remove the // when your sumDigits is ready
  // cout << "sumDigits(472) = " << sumDigits(472) << endl;   // goal: 13

  // Part 3: remove the // when your power is ready
  // cout << "power(2, 5) = " << power(2, 5) << endl;   // goal: 32

  return 0;
}
