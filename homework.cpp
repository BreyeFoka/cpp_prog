#include <iostream>

using namespace std;

/* 
    Name: Breye Foka Lagloire
    Reg Number: 2401000120
*/

int main()
{
    cout << "Welcome to the treasure Quest!" << endl;
    cout << "You are on a quest to find the hidden treasure" << endl;
    int choice;
    cout << "You are at crossroads. Where do you want to go?" << endl;
    cout << "1. Go left" << endl;
    cout << "2. Go right" << endl;
    cout << "3. Go straight" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "You chose to go left. You encounter a dangerous river!" << endl;
        cout << "1. Try to swim across" << endl;
        cout << "2. Look for a bridge" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "You attempt to swim across the river, but the current is too strong." << endl;
            cout << "You are swept away by the river. Game Over!" << endl;
        }
        else if (choice == 2)
        {
            cout << "You found a sturdy bridge and safely cross the river." << endl;
            cout << "Congratulations! You have successfully crossed the river." << endl;
            cout << "You found a strange cave. Do you want to enter?" << endl;
            cout << "1. Enter the cave" << endl;
            cout << "2. Continue on your path" << endl;
            cin >> choice;
            if (choice == 1)
            {
                cout << "You enter the dark cave. After navigating through some twists and turns," << endl;
                cout << "you discover a hidden treasure chest!" << endl;
                cout << "Congratulations! You found the hidden treasure! You win!" << endl;
            }
            else
            {
                cout << "You decide not to enter the cave and continued on your path." << endl;
                cout << "Unfortunately, you miss the hidden treasure. Game over!" << endl;
            }
        }
        else
        {
            cout << "Invalid choice. Game over!" << endl;
        }
        break;

    case 2:
        cout << "You chose to go right. You stumble upon a group of hostile bandits!" << endl;
        cout << "1. Attempt to fight them" << endl;
        cout << "2. Run away" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "You bravely fight the bandits, but they overpower you." << endl;
            cout << "You are captured. Game Over!" << endl;
        }
        else if (choice == 2)
        {
            cout << "You ran away from the bandits and escaped to safety." << endl;
            cout << "You find yourself in front of an ancient temple." << endl;
            cout << "Do you want to enter the temple?" << endl;
            cout << "1. Enter the Temple" << endl;
            cout << "2. Continue on your path" << endl;
            cin >> choice;
            if (choice == 1)
            {
                cout << "You enter the ancient temple and discover a hidden treasure chest!" << endl;
                cout << "Congratulations! You found the hidden treasure. You win!" << endl;
            }
            else
            {
                cout << "You decided not to enter the temple and continued on your path." << endl;
                cout << "Unfortunately, you miss the hidden treasure. Game over!" << endl;
            }
        }
        else
        {
            cout << "Invalid choice. Game over!" << endl;
        }
        break;

    case 3:
        cout << "You chose to go straight. You encounter a deep forest." << endl;
        cout << "1. Try to find a path through the forest" << endl;
        cout << "2. Turn back and choose another path" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "You navigate through the dense forest and get lost." << endl;
            cout << "You cannot find your way out. Game Over!" << endl;
        }
        else if (choice == 2)
        {
            cout << "You chose to turn back and choose another path." << endl;
            cout << "You find yourself at the crossroad again." << endl;
            cout << "Choose your path wisely!" << endl;
        }
        else
        {
            cout << "Invalid choice. Game over!" << endl;
        }
        break;

    default:
        cout << "Invalid choice. Game over!" << endl;
        break;
    }

    cout << "Press a key to exit" << endl;
    system("pause");
    return 0;
}
