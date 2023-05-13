#include <iostream>

using namespace std;

int main()
{
    // EXAMPLE 1
    // DECLARE
    // DataType {array name} [{array size}];
    // Declare an array called "array" of 7 integers
    int array[7];

    // INITIALIZE
    array[0] = 6;
    array[1] = 5;
    array[2] = 12;
    array[3] = 3;
    array[4] = 20;
    array[5] = 15;
    array[6] = 7;

    // TRAVERSE
    for (int index = 0; index < 7; index++)
        cout << array[index] << " ";

    cout << endl;

    // EXAMAPLE 2
    // DECLARE AND INITIALIZE
    string languages[5] = { "Arabic", "English", "Spanish" , "Chinese", "Italian" };

    // ACCESS
    // array[index] = element
    cout << "First Language is " << languages[0] << endl;

    // TRAVERSE 
    for (string language : languages)
        cout << language << " ";

}
