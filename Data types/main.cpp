/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    char a = 'T';
    int b = 100;
    float c = 10.10;
    double d = 50.23;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    
    int array [5] = {5, 10, 15, 20, 30};
    int sum = array[0]+array[1]+array[2]+array[3]+array[4];
    int average = (array[0]+array[1]+array[2]+array[3]+array[4])/5;
    
    cout << sum << endl;
    cout << average << endl;
    return 0;
}
