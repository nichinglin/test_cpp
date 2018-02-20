 /*----------------------------------------------------------------------*/
 /*  FILE:  factorial_longint.cpp  (Second C++ Lab Exercise 2)           */
 /*  WGET:  wget http://oceanai.mit.edu/cpplabs/factorial_longint.cpp    */
 /*  BUILD: g++ -o factorial_longint factorial_longint.cpp               */
 /*  RUN:   ./factorial_longint                                          */
 /*----------------------------------------------------------------------*/

 #include <iostream>

 using namespace std;

 int main()
 {
   int total = 1;
   long int total_long = 1;

   int num = 13;
   
   for (int i =2; i<= num; i++)
   {
      total *= i;
      total_long *= i;
   }
   
   cout << num << "!  is: " << total << " (using int)" <<endl;
   cout << num << "!  is: " << total_long << " (using long int)" <<endl;
   return(0);
 }
