#include <bits/stdc++.h>
using namespace std;

// Pass by value
// The vect here is a copy of vect in main()
void func1(vector<int> vect)
{
    vect.push_back(30);
}

// Pass by reference
// The vect is passed by reference and changes made here reflect in main()
void func2(vector<int> &vect)
{
    vect.push_back(30);
}

int main()
{
    vector<int> vect;
    vect.push_back(10);
    vect.push_back(20);

    func1(vect);

    // vect remains unchanged after function call
    cout << "func 1 call" << endl;
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";

    cout << endl;

    func2(vect);

    // vect changes after function call
    cout << "func 2 call" << endl;
    for (int i = 0; i < vect.size(); i++)
        cout << vect[i] << " ";

    return 0;
}
