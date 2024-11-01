#include <iostream>

using namespace std;

int main(){
    int  fact=1, i;

    for(i=5; i>=1; i--){
        while (i>1)
        {
            /* code */
            cout<<i<<"*";
            break;
        }
        fact=fact*i;
    }

    cout<<" = "<<fact;
    return fact;
}