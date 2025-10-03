#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;
typedef long long ll;

ll linearSearch(ll arr[], ll size, ll target)
{
    for (ll i = 0; i < size; i++)
    {
        if (target == arr[i])
        {
            return i;
        }
    }
    return -1;
}

ll binarySearch(ll arr[], ll size, ll target)
{
    ll low = 0;
    ll high = size - 1;
    while (low <= high)
    {
        ll mid = low + (high - low) / 2;
        if (target == arr[mid])
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    system("cls");
    const ll size = 10000;   // increase to 1 million for better timing
    // const int repeat = 10000; // repeat count

    ll arr[size];
    for (ll i = 0; i < size; i++)
    {
        arr[i] = i * 2;
    }

    ll target = -1; // use a non-existing value to force full scan

    // Linear search test
    auto startLinear = high_resolution_clock::now();
    for (int i = 0; i < size; i++)
    {
        linearSearch(arr, size, target);
    }
    auto endLinear = high_resolution_clock::now();
    auto durationLinear = duration_cast<nanoseconds>(endLinear - startLinear);
    cout << durationLinear.count() << endl;

    // Binary search test
    auto startBinary = high_resolution_clock::now();
    for (int i = 0; i < size; i++)
    {
        binarySearch(arr, size, target);
    }
    auto endBinary = high_resolution_clock::now();
    auto durationBinary = duration_cast<nanoseconds>(endBinary - startBinary);
      cout << durationBinary.count() << endl;

    return 0;
}
