## Bubble Sort algorithm
- bubbleSort(array)
- n = length(array)
- repeat
-   swapped = false
-   for i = 1 to n - 1
- if array[i - 1] > array[i], then
- swap(array[i - 1], array[i])
- swapped = true
- end if
- end for
- n = n - 1
- until not swapped
- end bubbleSort

### Code
---
```cpp
#include<iostream>
using namespace std;
void print(int a[], int n) //function to print array elements
{
int i;
	for(i = 0; i < n; i++)
	   cout<<a[i]<<" ";
}
 void bubble(int a[], int n) // function to implement bubble sort
 {
 int i, j, temp;
   bool isSwapped = false;
   for(i = 0; i < n; i++)    {
      isSwapped = false;
      for(j = 0; j < n - i - 1; j++)    {
            if(a[j] > a[j + 1])    {
            	isSwapped = true;
                temp = a[j]; //move 1st index to temp
                a[j] = a[j + 1]; //move 2nd index to 1st index
                a[j + 1] = temp; //move from temp to 2nd index
 }
        }
        if(!isSwapped) {
        	// no swapping is done. Hence, break the loop
        	break;
        }
    }
 }
int main()
{
    int i, j,temp;
    int a[5] = {15, 16, 11, 13, 14 };
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Before sorting array elements are: \n";
    print(a, n);
    bubble(a, n);
    cout<<"\nAfter sorting array elements are: \n";
    print(a, n);
return 0;
}
```

**Overall Purpose**

---

The code takes an unsorted array of integers and arranges them in ascending order (from smallest to largest).

**Code Breakdown**

1.  **`#include<iostream>`**
    *   This line includes the `iostream` library, which is essential for input and output operations in C++. It allows us to use things like `cout` (for printing to the console).

2.  **`using namespace std;`**
    *   This line makes it easier to use elements from the "standard namespace" (`std`). Without it, you'd have to write `std::cout` instead of just `cout`.

3.  **`void print(int a[], int n)`**
    *   This is a function named `print`.
    *   `void` means it doesn't return any value.
    *   `int a[]` means it takes an array of integers as input.  `a` is the name of the array.
    *   `int n` means it takes an integer as input.  `n` represents the number of elements in the array.
    *   **Inside the function:**
        *   It loops through the array from the first element (index 0) to the last (index `n-1`).
        *   For each element `a[i]`, it prints the element's value followed by a space (`cout << a[i] << " ";`).
        *   In essence, this function displays the array's contents.

4.  **`void bubble(int a[], int n)`**
    *   This is the core of the program: the "Bubble Sort" algorithm.
    *   `void` means it doesn't return any value.
    *   `int a[]` and `int n` are the same as in the `print` function: an integer array and its size.
    *   **Inside the function:**
        *   `int i, j, temp;` declares integer variables `i`, `j`, and `temp`. These will be used as loop counters and for temporary storage during the sorting process.
        *   `bool isSwapped = false;` Declares a boolean variable that tracks whether any swaps occurred in each pass. It's initialized to `false`.

        *   **Outer Loop (`for(i = 0; i < n; i++)`)**
            *   This loop iterates `n` times (where `n` is the number of elements in the array).  Each pass of the outer loop places the largest unsorted element to its correct position at the end of the array.
            *    `isSwapped = false;` Before each pass of the inner loop, reset the `isSwapped` flag to `false`.

        *   **Inner Loop (`for(j = 0; j < n - i - 1; j++)`)**
            *   This loop compares adjacent elements in the array.  The `n - i - 1` part is crucial because as the outer loop progresses, the last `i` elements are already in their correct sorted positions. So, we don't need to compare them again.
            *   **Comparison (`if(a[j] > a[j + 1])`)**
                *   If the element at index `j` is greater than the element at index `j + 1`, it means they are in the wrong order.
                *   **Swap**
                    *   `temp = a[j];`  Stores the value of `a[j]` in the `temp` variable (temporary storage).
                    *   `a[j] = a[j + 1];`  Assigns the value of `a[j + 1]` to `a[j]`.
                    *   `a[j + 1] = temp;`  Assigns the value stored in `temp` (which was the original value of `a[j]`) to `a[j + 1]`.  This completes the swap.
                    *   `isSwapped = true;` Set `isSwapped` to `true` to indicate that a swap occurred in this pass.

        *   **Optimization (`if(!isSwapped) break;`)**
            *   After each pass of the inner loop, it checks the value of `isSwapped`. If `isSwapped` is `false`, it means that no swaps occurred in that pass, which implies that the array is already sorted. In this case, the outer loop is terminated using the `break` statement to avoid unnecessary iterations.

5.  **`int main()`**
    *   This is the `main` function, where the program's execution begins.
    *   `int i, j, temp;` declares integer variables `i`, `j`, and `temp`. These are not used in the `main` function and can be removed.
    *   `int a[5] = {15, 16, 11, 13, 14 };`
        *   Declares an integer array named `a` with a size of 5.
        *   Initializes the array with the values: 15, 16, 11, 13, 14.
    *   `int n = sizeof(a)/sizeof(a[0]);`
        *   Calculates the number of elements in the array `a`.
        *   `sizeof(a)` gives the total size of the array in bytes.
        *   `sizeof(a[0])` gives the size of a single element (an integer) in bytes.
        *   Dividing the total size by the size of a single element gives you the number of elements.
    *   `cout << "Before sorting array elements are: \n";`
        *   Prints a message to the console indicating that the unsorted array will be displayed.
    *   `print(a, n);`
        *   Calls the `print` function to display the unsorted array.
    *   `bubble(a, n);`
        *   Calls the `bubble` function to sort the array using the Bubble Sort algorithm.
    *   `cout << "\nAfter sorting array elements are: \n";`
        *   Prints a message to the console indicating that the sorted array will be displayed.
    *   `print(a, n);`
        *   Calls the `print` function to display the sorted array.
    *   `return 0;`
        *   Indicates that the program executed successfully.

**How Bubble Sort Works**

Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until no swaps are needed, which indicates that the list is sorted.

The largest element "bubbles" to its correct position at the end of the array with each pass.  The process repeats for the remaining unsorted elements.

**Example:**

Let's trace the example array `a = {15, 16, 11, 13, 14}`:

1.  **Initial Array:** `[15, 16, 11, 13, 14]`
2.  **First Pass:**
    *   15 and 16 are compared, no swap
    *   16 and 11 are compared, swap: `[15, 11, 16, 13, 14]`
    *   16 and 13 are compared, swap: `[15, 11, 13, 16, 14]`
    *   16 and 14 are compared, swap: `[15, 11, 13, 14, 16]` (16 is now in its correct position)
3.  **Second Pass:**
    *   15 and 11 are compared, swap: `[11, 15, 13, 14, 16]`
    *   15 and 13 are compared, swap: `[11, 13, 15, 14, 16]`
    *   15 and 14 are compared, swap: `[11, 13, 14, 15, 16]` (15 is now in its correct position)
4.  **Third Pass:**
    *   11 and 13 are compared, no swap
    *   13 and 14 are compared, no swap
    *   .... and so on.

The algorithm continues until the array is fully sorted. The optimization with `isSwapped` helps to stop the algorithm early if it detects that the array is already sorted during a pass.

**In summary, this code demonstrates a basic sorting algorithm called Bubble Sort in C++. It's a good example for understanding fundamental programming concepts like arrays, loops, conditional statements, and functions.**
