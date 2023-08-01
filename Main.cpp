
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int number[10];
    int Largest = 0;
    int Smallest = number[0];


    cout << "Please enter 10 numbers into the array" << endl;

    for(int i = 0; i < 10; i++)
    {
        cout << "Please input #" << (i+1) << endl;
        cin >> number[i];
    }

    for(int i = 0; i < 10; i++)
    {
        if(number[i] > Largest)
        {
            Largest = number[i];
        }

        if(number[i] < Smallest)
        {
            Smallest = number[i];
        }
    }

    cout << "The smallest number is " << Smallest << endl;
    cout << "The largest number is " << Largest <<endl;

    return 0;
}
