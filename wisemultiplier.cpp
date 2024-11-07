#include <iostream>

using namespace std;

int main() {
    int mul=1, x, z=-999;
    cout<<"Please enter 10 numbers to multiply"<<endl;
    for(int i=1; i<=10; i++){
        cin>>x;
        if (x<0 && x!=z)
        {
            continue;
        }else if(x<0 && x==z){
            cout<<"You entered a wrong number. the program shall exit";
            break;
        } else{
            mul=mul*x;    
        }
    }

    cout<<mul;
}
