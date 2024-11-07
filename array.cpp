#include <iostream>

using namespace std;

int main (){
    int i;
    string names[3]={"john adams", "alice", "bob"};
    string names2[4];

    for(i=0; i<3; i++){
        cout<<"Please enter names: \n";
        getline(cin, names2[i]);
        cout<<"You entred this name: "<<names2[i]<<"\n";
    }
    for (i=0; i<3; i++){
        cout<<names2[i]<<"\n";
    }
    return 0;
}