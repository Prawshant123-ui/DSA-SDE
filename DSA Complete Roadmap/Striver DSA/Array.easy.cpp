// Largest Element

// #include <iostream>
// #include <vector>
// using namespace std;

// int findLargest(const vector<int> &arr)
// {
//     int max = arr[0];

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }

//     return max;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};

//     int result = findLargest(arr);

//     cout << "The largest element in the array is: " << result;

//     return 0;
// }

// Second Largest Element

// #include <iostream>
// using namespace std;
// #include <vector>

// int secondLargest(vector<int> &arr, int n)
// {
//     int largest = arr[0];
//     int slargest = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > largest)
//         {
//             slargest = largest;
//             largest = arr[i];
//         }
//         else if (arr[i] < largest && arr[i] > slargest)
//         {
//             slargest = arr[i];
//         }
//     }
//     return slargest;
// }

// int main()
// {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int n = arr.size();
//     int result = secondLargest(arr, n);

//     cout << "The 2nd largest element in the array is: " << result;

//     return 0;
// }


// Check if the given array is sorted

#include <iostream>
using namespace std;
#include <vector>

bool checkSorted(vector<int>& arr, int n) {
    for (int i = 1; i < n; i++) {
        if (arr[i] <= arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main()
{
     vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    int result=checkSorted(arr,n);
    cout << "The array is sorted or not? " << result;
    
    return 0;
}
