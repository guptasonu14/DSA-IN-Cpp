#include <iostream>
using namespace std;

int main()
{
    try
    {
        int age = 12;
        if (age >= 18)
        {
            cout << "You are eligible to vote.";
        }
        else
        {
            throw -1;
        }
    }
    catch (int num)
    {
        cout << "Sorry, you are not eligible to vote" << endl;
        cout << "Error " << num;
    }
}