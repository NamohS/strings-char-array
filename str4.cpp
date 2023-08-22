#include <iostream>

using namespace std;

int main() {
  char name[100];
  cout << "Enter your name: ";
  cin.get(name,20);
  
  int space ;
  for (int i = 0; name[i]!='\0'; i++) {
    if (name[i] == ' ') {
      space = i+1;
      break;
    }
  }
  cout << name[0] << name[space] << endl;

  return 0;
}
