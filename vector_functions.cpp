#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> * vp = new vector<int>();
    vector<int> v;

    /*
    for (int i = 0; i < 100; i++)
    {
        cout << "cap:" << v.capacity() << endl;
        cout << "size:" << v.size() << endl;
        v.push_back(i + 1);
    }
    */

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    v[1] = 100;

    // dont use [] for inserting elements
    // v[3] = 1002;
    // v[4] = 1234;

    v.push_back(23);
    v.push_back(234);

    v.pop_back();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Iterator
    vector<int>::iterator it = v.begin();
    while (it != v.end())
    {
        cout << *it << "  ";
        it++;
    }
}
