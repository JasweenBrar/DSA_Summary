#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> removeDuplicates(int *a, int size)
{
    vector<int> output;
    unordered_map<int, bool> seen;
    for (int i = 0; i < size; i++)
    {
        if (seen.count(a[i]) > 0)
        {
            continue;
        }
        seen[a[i]] = true;
        output.push_back(a[i]);
    }
    // Iterator
    unordered_map<int, bool>::iterator it = seen.begin();
    while (it != seen.end())
    {
        cout << "Key : " << it->first << " Value: " << it->second << endl;
        it++;
    }
    return output;
}

int main()
{
    int a[] = {1, 2, 3, 3, 2, 1, 4, 3, 6, 5, 5};
    vector<int> output = removeDuplicates(a, 11);
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i] << " * ";
    }
}
