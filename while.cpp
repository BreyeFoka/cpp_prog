#include <iostream>

using namespace std;

int main(){

    int sum=0, i=1;

    while(i<=10)
    {   
        cout<<sum<<endl;
        cout<<i<<endl;
        sum=sum+1;
        i++;
    }
    cout<<"the result is:"<<sum<<endl;

    sum=0;
    i=1;
    do {
        sum=sum+1;
        i++;
    } while (i<=10);
    cout<<"the result is "<<sum<<endl;
    return 0;
    
}