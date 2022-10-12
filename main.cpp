
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vec_1{1,2,3};

    //vector <int> vec_2{ 5,3,7,-99 };
    char choice{};
    int flag{ 0 }, i{ 0 }, input{ 0 }, sum{ 0 }, min{ 0 }, max{ 0 };
    char answer{};
    
    while (!flag) {


        cout << "======================" << endl;
        cout << "======MAIN MENU=======" << endl;
        cout << "======================" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean (average) of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "======================" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;
        switch (choice)
        {
        case 'p':
        case 'P':

            cout << "Current list: " << endl;
            
            for (i = 0; i < vec_1.size(); i++)
                cout << " [" << vec_1.at(i) << "]";
            cout << endl;
            break;
        case 'a':
        case 'A':
            cout << "Enter a number:" << endl;
            cin >> input;
            vec_1.push_back(input);
            cout << "Number is added" << endl;
            
            break;

        case 'm':
        case 'M':
            if (vec_1.size() <= 0) {
                cout << "Unable to calculate the mean - no data" << endl;
                break;
            }
            for (i = 0; i < vec_1.size(); i++)
                sum = sum + vec_1[i];

            cout << "Average is: ["<< sum/vec_1.size()<<"] " << endl;
            break;

        case 's':
        case 'S':

            if (vec_1.size() == 0) {
                cout << "Unable to calculate n - no data" << endl;
                break;
            }
            //temp = vec_1.at(0);
            min = vec_1.at(0);
            for (i = 0; i < vec_1.size()-1; i++)
            {
                if (vec_1.at(i) > vec_1.at(i + 1))

                    min = vec_1.at(i + 1);

            }
            cout << "Smallest number is: ["<< min<<"]" << endl;
            break;


        case 'l':
        case 'L':
            if (vec_1.size() == 0) {
                cout << "Unable to calculate n - no data" << endl;
                break;
            }
            max = vec_1.at(0);
            for (i = 0; i < vec_1.size() - 1; i++)
            {
                if (vec_1.at(i) < vec_1.at(i + 1))

                    max = vec_1.at(i + 1);

            }
            cout << "Largest number is: ["<<max<<"]" << endl;
            break;


        case 'q':
        case 'Q':
           
            cout << "Are you sure you want to quit? Y/N" << endl;
            cin >> answer;
            if (answer == 'Y' || answer == 'y') {
                flag = 1;
                cout << "Program finished..." << endl;
            }
                break;
        default:
            cout << "False input, try again" << endl;
            break;
        }
    }

    return 0;
}
