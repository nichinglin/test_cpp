 /*----------------------------------------------------------------------*/
 /*  FILE:  factorial.cpp  (Second C++ Lab Exercise 1)                   */
 /*  WGET:  wget http://oceanai.mit.edu/cpplabs/factorial.cpp            */
 /*  BUILD: g++ -o factorial factorial.cpp                               */
 /*  RUN:   ./factorial                                                  */
 /*----------------------------------------------------------------------*/

 #include <iostream>
 #include <cstdlib>
 using namespace std;

 int main(int argc, char **argv)
 {
   if(argc != 2){
     cout << "Usage: factorial_cmdargs NUMBER" << endl;
     exit(1);
   }
   
   int num = atof(argv[1]);

   long int total = 1;
   for (int i =2; i<= num; i++)
   {
     total *= i;
   }
   cout << num << "! is:" << total << endl;
   return(0);
 }
