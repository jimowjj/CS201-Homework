#include<iostream>
using namespace std;
#include<ctime>

int main()
{
    srand((unsigned int)time(NULL));
    int num = rand() % 100;
    int val;
    while (cin >> val)
    {
        if (val > num)
            cout << "Too high, try again" << endl;
        else if (val < num)
            cout << "Too low, try again" << endl;
        else {
            cout << "You are right" << endl;
            break;
        }    

    }

    return 0;
}
