#include <iostream>
using namespace std;

int main()
{
    string name1, name2;
    float perc1, perc2;
    cout << "enter name1 " << endl;
    cout << "enter name2 " << endl;
    cin >> name1 >> name2;

    cout << "enter perc1" << endl;
    cout << "enter perc1" << endl;
    cin >> perc1 >> perc2;

    if (perc1 > perc2)
    {
        cout << name1 << endl;
    }
    else if (perc2 > perc1)
    {
        cout << name2 << endl;
    }
    else
    {
        cout << "equal" << endl;
    }
}
