#include <iostream>

using namespace std;

int main() {

  char str[] = "Hello, world!";
 
  char *ptr = str;

  while (*ptr != '\0') {
    ptr++;
  }

  int len = ptr - str;

  cout << "The length of the string is " << len << endl;

  return 0;
}