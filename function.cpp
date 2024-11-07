#include <iostream>

using namespace std;

void foo(int &num);


int main(){
    foo();
    return 0;
}

void foo(){
    cout<<"Hello World!"<<endl;
    
}
