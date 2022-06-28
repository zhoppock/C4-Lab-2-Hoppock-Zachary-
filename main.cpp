// Hoppock, Zachary
// rocketCountdown.cpp
// 10/13/2020
// Using a while loop, start at 10 and count down to 1 and output “Blastoff”
// Version # 1
#include <iostream>
using namespace std;

int main()
{
  int count = 10;
  while (count > 0)
  {
    cout << count << ", ";
    count--;
  }
  cout << "Blastoff!";
  return 0;
}