#include <bits/stdc++.h>
using namespace std;

int findMax(deque<int>& nums){
    int max = nums[0];
    for (const auto& val: nums) if (val>max) max = val;
    return max;
}
int findMin(deque<int>& nums){
    int min = nums[0];
    for (const auto& val: nums) if (val<min) min = val;
    return min;
}
int main() {
    system("clear");

    deque<int> nums;
    for (int i = 1; i <= 5; i++)
        nums.push_back(i*10);

        cout << "Print : ";
        for (const auto& val: nums)
        cout << val << " ";

        cout << endl;

        for (auto it=nums.begin(); it!= nums.end(); ++it)
        cout << *it << " ";

        cout << endl;
        cout << "Max is: " << findMax(nums) << endl;
        cout << "Min is: " << findMin(nums) << endl;
    return 0;
}
