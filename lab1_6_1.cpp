#include <iostream>
using namespace std;
int main(void) {
bool answer;
int value;
cout << "Enter a value: ";
cin >> value;
if((value>=0 && value<10) || ((value*2)<20 &&((value-2)> -2))||((value-1)> 1)&&((value/2)<10) || value==111 ){
    cout << "THAT'S TRUE :)";
}
else{
    cout <<  "THAT'S NOT TRUE :(";
}
return 0;
}