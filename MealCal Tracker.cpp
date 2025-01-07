//Description: this program will caculate the number of calories in a meal based on user input

#include <iostream>
using namespace std;

int main()
{
    char meal_choice;
    int servings,
        total_calories;

    cout << "Welcome to the Calorie Count-ulator!\n";
    cout << "Enter your meal choice ([P]izza, [S]alad, [H]amburger)\n";

    cin >> meal_choice;

    switch (meal_choice)
    {
        case 'P':
        case 'p':
            cout << "Enter the amount of servings (1-9):\n";
            cin >> servings;
            if(servings < 1 || servings > 9)
            {
                cout << "Invalid serving choice. Terminating the program." << endl;
            }
            else
            {
            total_calories = servings * 500;
            cout << "Total calories consumed: " << total_calories << endl;
            }
            break;

        case 'S':
        case 's':
            cout << "Enter the amount of servings (1-9):\n";
            cin >> servings;
            if(servings < 1 || servings > 9)
            {
                cout << "Invalid serving choice. Terminating the program." << endl;
            }
            else
            {
            total_calories = servings * 150;
            cout << "Total calories consumed: " << total_calories << endl;
            }
            break;

        case 'H':
        case 'h':
            cout << "Enter the amount of servings (1-9):\n";
            cin >> servings;
            if(servings < 1 || servings > 9)
            {
                cout << "Invalid serving choice. Terminating the program." << endl;
            }
            else
            {
            total_calories = servings * 450;
            cout << "Total calories consumed: " << total_calories << endl;
            }
            break;

        default:
            cout << "Invalid meal choice. Terminating the program." << endl;
    }
    return 0;
}
