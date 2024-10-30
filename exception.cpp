#include <iostream>
using namespace std;

int main()
{
    int age;
    string errorMessage = "Please enter a valid number ";

    try
    {
        /* code */
        cout << "Please enter your age: " << endl;
        cin >> age;
        cout << "Your age is: " << age << endl;
        if (age < 0)
        {
            throw errorMessage;
        }
        if (age > 18)
        {
            /* code */
            cout << "You can vote" << endl;
        }
        else
        {
            cout << "unfortunately you can't vote" << endl;
        }
    }
    catch (string thrown_error)
    {
        cout << thrown_error << endl;
    }

    // program for division

    int num1, num2;
    float result;
    try
    {
        /* code */
            cout<<"Please enter two numbers"<<endl;
            cin>>num1>>num2;
            if(num2<0){
                throw(errorMessage);
            }else{
                    result = num1/num2;
            }
    }
    catch(string errorMessage)
    {
        cerr << errorMessage << '\n';
    }
    

}