#include <bits/stdc++.h>
using namespace std;

int main()
{
    system("clear");
    deque<int> dq;
    for (int i = 1; i <= 5; i++)
    {
        dq.push_back(i * 10);
    }
    cout << "Printing deque: ";
    for (const auto &val : dq)
    {
        cout << " " << val;
    }
    cout << endl;
    // Access index
    cout << "Deque index[0]: " << dq[0] << endl;
    cout << "Deque index[1]: " << dq[1] << endl;
    cout << "===================================================" << endl
         << endl;
    // push back and front
    cout << "added in the back: " << "dq.push_back(100)" << endl;
    dq.push_back(100);
    cout << "added in the front: " << "dq.push_front(111)" << endl;
    dq.push_front(111);
    cout << "===================================================" << endl
         << endl;
    // Accessing front and back
    cout << "Accessing front element: " << dq.front() << endl;
    cout << "Accessing back element: " << dq.back() << endl;
    cout << "===================================================" << endl
         << endl;
    // using insert to add element into any index of deque
    cout << "insert 999: " << endl;
    dq.insert(dq.begin() + 2, 999);
    // dq.erase(dq.begin()+2);

    // using iterators
    cout << "Print all elements using iterators: ";
    for (auto it = dq.begin(); it != dq.end(); ++it)
        cout << " " << *it;

    cout << endl;
    return 0;
}
