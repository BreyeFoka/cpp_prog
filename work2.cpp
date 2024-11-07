#include <iostream>

using namespace std;

int main(){
    int arr[10];
    cout<<"please Enter 10 students marks"<<endl;

    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    int highest=0;
    int lowest=0;
    int counthigh=0, countlow=0;

    for(int i=0; i<10; i++){
        if(arr[i]>highest){
            highest=arr[i];

         } }
    for(int i=0; i<10; i++){

        if(arr[i+1]<arr[i]){
            lowest=arr[i];
        }
    }
    
    cout<<"The highest mark is: "<<highest<<endl;
    cout<<"The lowest mark is: "<<lowest<<endl;

}