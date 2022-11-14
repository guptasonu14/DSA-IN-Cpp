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
            throw "Error Found";
        }
    }
    catch (...)
    {
        cout << "Sorry, you are not eligible to vote" << endl;
    }
}