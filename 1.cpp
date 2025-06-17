#include <iostream>
using namespace std;
int main() {
    int price;
    int items;
    int total;
    cout << "What is the price of your item:";
    cin >> price;
   cout << "How many items do you want to buy:";
   cin >> items;
   total = price * items;
   if( items > 5){
    total = total * 0.9;
   }
   else { total = total }
   cout << "The total price is:" << total;

    return 0;
}