#include <iostream>

using namespace std;

int main(){
    int x;
    int result;
    cout<<"HEllo, welcome to the program please enter your number"<<endl;

    cin>> x;

    result = x%2;

    result==0 ? cout<<x<<" is even"<<endl : cout<<x<<" is odd";
    return 0; 
}