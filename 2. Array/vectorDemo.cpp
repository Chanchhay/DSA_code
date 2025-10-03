#include <iostream>
#include <vector>
using namespace std;
int main()
{
    system("cls");
    vector<int> vec;         // Declare a vector of integers
    vector<int> vec2(5);     // Declare a vector of integers with 5 elements initialized to 0
    vector<int> vec3(5, 10); // Declare a vector of integers with 5 elements initialized to 10
    cout << "Size of vec3: " << vec3.size() << endl;
    vec3.push_back(20); // Add an element to the end of vec3
    vec3.push_back(30); // Add another element to the end of vec3
    cout << "Size of vec3 after push_back: " << vec3.size() << endl;
    // cout << "Vector created." << vec[0] << endl;
    cout << "Initial size of vector: " << vec.size() << endl;
    cout << "Initial capacity of vector: " << vec.capacity() << endl;
    // cout << "Vector vec2 created with 5 elements." << vec2[1] << endl;
    cout << "Initial size of vec2: " << vec2.size() << endl;
    cout << "Initial capacity of vec2: " << vec2.capacity() << endl;
    for (const auto &elem : vec3)
    {
        cout << elem << " ";
    }
    return 0;
}
