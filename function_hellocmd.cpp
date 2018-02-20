#include <iostream>   // For terminal I/O using cout                                 
using namespace std;

void message()
{
  cout << "hello world!" <<endl;
}

void message_longOrShort(string str)
{
  cout << str <<endl;
  if(str.length() > 10)
    cout << "long message" <<endl;
  else
    cout << "short message" <<endl;
}

int main(int argc, char **argv)
{
  //message();
  if(argc != 2)
  {
    cout << "error" <<endl;
    return(0);
  }
  message_longOrShort(argv[1]);
  return(0);
}
