 /*----------------------------------------------------------------------*/
 /*  FILE:  factorial.cpp  (Second C++ Lab Exercise 1)                   */
 /*  WGET:  wget http://oceanai.mit.edu/cpplabs/factorial.cpp            */
 /*  BUILD: g++ -o factorial factorial.cpp                               */
 /*  RUN:   ./factorial                                                  */
 /*----------------------------------------------------------------------*/

 #include <iostream>

 using namespace std;

 int main()
 {
   int total = 1;
   int num = 10;
   for (int i =2; i<=num; i++)
   {
       total *= i;
   }
   cout << num << "! is equal to: " << total << endl;
   return(0);
 }
