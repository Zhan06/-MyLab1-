#include <iostream>
using namespace std;
int main() {
    double rad;
    cout << "Write the radius of your ball to get the volume of the sphere:";

 cin >> rad;
  int volume = 4 /3 * 3.14 * rad * rad * rad;
    cout << "The volume of the sphere is:" << volume;

    return 0;
