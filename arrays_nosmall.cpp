#include <iostream>   // For terminal I/O using cout        
#include <cstdlib>                         

using namespace std;


int main(int argc, char **argv)
{
  if(argc <=1)
  {
    cout << "error" << endl;
    return(1);
  }
  
  int number = argc-1;
  int numbers[number];


  cout << "total amount of integers provided:" << argc-1 << endl;
  for (int i =1; i< argc; i++)
  {
    numbers[i-1] = atoi(argv[i]);
    cout << "numbers[" << i-1 << "]: " << numbers[i-1] << endl;
  }
  cout << "the new array of intergers:" << endl;
  int cnt = 0;
  for (int i =0; i< number; i++)
  {
    bool printed = true;
    for (int j =i+1; j< number; j++)
    {
      if(numbers[i] == numbers[j])
        printed = false;
    }
    if (printed)
      cout << "numbers[" << cnt++ << "]: " << numbers[i] << endl;
  }
  return(0);
}
