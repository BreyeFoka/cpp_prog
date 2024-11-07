#include <iostream>

using namespace std;


void swapByValue(int a, int b) {
    int c;
    a = b;
    b = c;
    c = a;   
    cout<<&a<<"\n"<<&b<<endl;
}

void swapByReference(int &x, int &y) {
    int temp=x;
    x=y;
    y=temp;
    cout<<&x<<"\n"<<&y<<endl;
};

int  main() {
    int a = 4;
    int b = 5;

    cout<<&a<<"\n"<<&b<<"\n";

    swapByReference(a, b);
    cout << "A:"<<a<< " and "<<"B:" <<b;

    return 0;

}