#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the first integer: ";
    cin >> num1;
    cout << "Enter the second integer: ";
    cin >> num2;

    if (num2<num1)
    {
        cout<< "Second integer can't be less than the first" <<endl;
 }
 else
 {
    for(int i = num1; i<= num2; i+=5)
    {
        cout<< i << " ";
    }
    cout << endl;
 }
 return 0;
}
