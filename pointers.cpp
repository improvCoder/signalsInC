#include<iostream>
#include <csignal>
using namespace std;

void signal_handler(int signal_num)
{
  cout<<"Signal Number is:"<<signal_num<<endl;
  exit(signal_num);
}


int main()
{
  signal(SIGINT,signal_handler);
  while(true)
    {
      cout<<"hello world"<<endl;
      cout<<"another hello"<<endl;
    }
  
  return 0;
}







