#include <iostream>   // For terminal I/O using cout 
#include <cmath>                                
using namespace std;

int test1();
int test2();
void test3();
void get_divisors(int n);
int get_input();
void prime(int x);


int main(int argc, char **argv)
{
	//test1();
	//test3();
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


int test1()
{
    unsigned long long a;
    long b = 1,d;
    char e;
    bool f;
    cout << "請輸入一個正整數：__________\b\b\b\b\b\b\b\b\b\b";
    f = 1;
    b = 1;
    cin >> a;
    if (a > 0 and a <= 10000000)
    {
        while (a > 1)
        {
            b++;
            if (a % b == 0)
            {
                cout << b;
                d = 0;
                while (a % b == 0)
                {
                d++;
                a = a / b;
                }
                if (d != 1)
                cout << " ^ " << d;
                if (a > 1)
                cout << " * ";
            }
        }
        cout << endl;
    }
    return 0;
}

int test2()
{

      unsigned long long in;      //儲存輸入
      while(true)
      {
      cout<<"Number:";
      cin>>in;
      for(unsigned int x=2;x<=in;x++)
      {
                while(in%x==0)
                {
                          cout<<x<<"*";
                          in/=x;
                }
      }
      cout<<"\b \n";
      }

      return 0;
}