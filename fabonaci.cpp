#include <iostream>
using namespace std ;
int main (){
long int f0=0, f1=1, fn;
int n;

    cout<<f0<<" ";
    cout<<f1<<" ";

for(n=2; n<20; n++){
    fn=f0+f1;
    cout<<fn<<" ";
    f0=f1;
    f1=fn;
}

    /* code */

} 