// #include <iostream>
// using namespace std;
// int main(){
//     int array[3][3][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27};

//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             for(int k=0; k<3; k++){
//                 cout<<array[i][j][k]<<" ";
//             }
//             cout<<endl;
//         }
//         cout<<endl;
//     }
// }


#include <iostream>

using namespace std;

int main() {

	int *p, *p1;
	p = new(int);
	p1 = new(int);
	cout << "Please enter values: ";
	cin >> *p >> *p1;

	cout << *p + *p1;
	delete p;
	delete p1;
	p = NULL;
	p1 = NULL;

}