#include <iostream>
#include <string>
using namespace std;
int main() {
   string FullName;
   cout << "Write your full name:";
   getline (cin,FullName);
   cout << "Hello," << FullName << " you are a new member of students who study in SUMMER.";

    return 0;
}