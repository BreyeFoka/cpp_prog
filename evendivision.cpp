#include <iostream>

using namespace std;

int main() {
    int num;

    cout<<"please enter the number you want ot check"<<endl;
    cin>>num;

    if (num%2==0) {
        cout<<"the number is even"<<endl;
        if (num%9==0) {
            cout<<"the number is divisible by 9"<<endl;
            cout<<"the number you entered is evenly didvisibke  by 9"<<endl;

        } else{
            cout<<"unfortunately the number is not divisible by nine"<<endl;
        }
    }else{
        cout<<"then number you entered is odd"<<endl;
        cout<<"no nee to continue"<<endl;
    }

}