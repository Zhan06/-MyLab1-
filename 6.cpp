#include <iostream>
using namespace std;
int main(){
int chosen ;
cout << "What would you prefer to drink? \n 1. Coffee \n 2.tea \n 3.juice";
cin >> chosen;
switch(chosen){
    case 1:
    cout << "You chose coffee, enjoy your drink!";
    break;
    case 2:
    cout << "You chose tea, enjoy your drink!";
    break;
    case 3:
    cout << "You chose juice, enjoy your drink!";
    break;
    default:
    cout << "Invalid choice, please choose 1, 2 or 3.";


}
return 0;







}