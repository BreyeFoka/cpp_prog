#include <iostream>

using namespace std;

int main(){
    int num, sum=0, x;
    cout<<"How many numbers do you want to add?:"<<endl;
    cin>>x;
    for(int i=1; i<=x; i++){
        cout<<"enter a number";
        cin>>num;
        sum = sum+num;

    }
    cout<<"the summation is:"<<sum;
}