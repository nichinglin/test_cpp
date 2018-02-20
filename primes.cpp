#include <iostream>   // For terminal I/O using cout 
#include <cmath>                                
using namespace std;

void test3();
void get_divisors(int n);


int main(int argc, char **argv)
{
	//test1();
	test3();
  prime(get_input());

  return 0;
}

void test3()
{
    int n = 0;

    cout << "Enter a number and press ENTER: ";
    cin >> n;
    get_divisors(n);
    cout << endl;
}

void get_divisors(int n) {
     int i;
     double sqrt_of_n = sqrt(n);

     for (i = 2; i <= sqrt_of_n; i++)
         if (n % i == 0) {   // If i divides n evenly,
            cout << i << ", ";    //   Print i,
            get_divisors(n / i);  //   Factor n/i,
            return;               //   and exit.
         }

     // If no divisor is found, then n is prime;
     //  Print n and make no further calls.

     cout << n;
}