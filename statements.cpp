#include <iostream>

using namespace std;

int main() {
    int num=3;
    string pwd="password";

    cout<<"Please enter your password: ";
    string password;

    cin>>password;

    while(num>0){
         if (password==pwd) {
        cout<<"Access Granted"<<endl;
        break;
        }else {
        cout<<"wrong password try again!"<<endl;
        cin>>password;
        num--;}
    }
   
    cout<<"Sorry please try again later";
    return 0;
}