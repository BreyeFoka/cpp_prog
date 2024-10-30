#include <iostream>

using namespace std;

int main(){
    int age;
    cout<<"how old are you?"<<endl;
    cin>>age;
    if (age>=0 && age<=3){
        cout<<"you are a toddler"<<endl;
    } else if(age>=4 && age<12){
        cout<<"you are a kid"<<endl;
    } else if(age>=12 && age<=18){
        cout<<"you are a teenager"<<endl;
    } else if(age>18 && age<=35){
        cout<<"you are youth"<<endl;
        cout<<"you can get a job"<<endl;
    } 
    else if(age>35){
        cout<<"you are old"<<endl;
        cout<<"you can retire"<<endl;
    }
    else if(age>55) {
        cout<<"adult"<<endl;
    }
}
