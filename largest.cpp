#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cout<< "Enter three numbers"<<endl;
    cin>>a>>b>>c;
    int largest=a;
    c>largest ?  largest=c : largest=a;
    b>largest?  largest=b : largest=largest;
    cout<<"The largest number is: "<<largest<<endl;
    return 0;
}