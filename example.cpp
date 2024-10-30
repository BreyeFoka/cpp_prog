#include <iostream>

using namespace std;

int main(){
    int age, weight;
    cout<< "Welcome to the blood donation verificator"<<endl;
    // cout<< "Enter your age"<<endl;
    // int age;
    // cin>>age;
    // cout<< "Enter your weight"<<endl;
    // float weight;
    // cin>>weight;
    // if (age>18 && weight>=50){
    //     cout<< "You can donate blood"<<endl;
    // } else{
    //     cout<< "You can't donate blood"<<endl;
    // }

    cin>>age>>weight;
    if (age==18){
        if (weight>=50){
            cout<< "You can donate blood"<<endl;
        } else{
            cout<< "You can't donate blood, you need to be at least 50kg"<<endl;
        }
    } else{
        cout<< "You can't donate blood, you need to be 18 years old"<<endl;
    }
    return 0;
}