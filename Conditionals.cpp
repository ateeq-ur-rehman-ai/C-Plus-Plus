#include <iostream>
using namespace std;
int main()
{
    int percentage;
    cout << "Enter Your Percentage: " << endl;
    cin >> percentage;

    if (percentage > 80)
    {
        cout << "Garde A+" << endl;
    }   
    else if (percentage > 70)
    {
        cout << "Grade A" << endl;
    }
    else if (percentage > 60)
    {
        cout << "Grade B" << endl;
    }
    else if (percentage > 50)
    {
        cout << "Grade C" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
}