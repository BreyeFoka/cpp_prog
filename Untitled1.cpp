#include <iostream>

using namespace std;

int main(){
    int i=0, n;
    string letter="" ;
    string input="";
    for(n=0; n<26; n++){
        if(n=0){
            letter="A";
            cout<<"please type int ythe alphabet you see:"<<endl;
            cin>>input;
            while (input!=letter)
            {
                cout<<"please type int ythe alphabet you see:"<<endl;
                cin>>input;
            }
            continue;
        }

    }
}
