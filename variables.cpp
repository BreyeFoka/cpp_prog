#include <iostream>

using namespace std;

int num1;
int num2;
int result;
string fname;
string name;
float pi;

int main(){

    cout<<"Please enter a number: "<<endl;
    cin>>num1;
    cout<<"Please enter a second number: "<<endl;
    cin>>num2;
    cout<<"Please enter your first name : "<<endl;
    cin>>fname;
    cin.ignore();
    cout<<"PLease enter your full name: ";
    getline(cin, name);
    cout<<"Please enter the value of pi: "<<endl;
    cin>>pi;
    result= num1+num2;
    cout<<"the result of the calculation is:"<<endl;
    cout<<result;
    cout<<endl;
    cout<<"Your first name is:"<<endl;
    cout<<name<<endl;
    cout<<"the result of pi is:"<<pi<<endl;
    cout<<result<<endl;
    cin.get();
    return 0;
}