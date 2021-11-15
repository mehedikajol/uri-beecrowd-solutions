#include<iostream>
using namespace std;
int main(void){
    long int input, hour, minute, temp;
    cin >> input;
    hour = input / 3600;
    temp = input % 3600;
    minute = temp / 60;
    temp = temp % 60;
    cout << hour << ":" << minute << ":" << temp << endl;
    return 0;
}