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

#include <iostream>
#include <vector>
using namespace std;

int findLargest(vector<int> &arr, int n)
{
    int largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    return largest;
}

int secondLargest(vector<int> &arr, int n)
{
    int largest = findLargest(arr, n);
    int secondLargest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    int largestElement = findLargest(arr, n);
    int secondLargestElement = secondLargest(arr, n);

    cout << "The largest element in the array is: "
         << largestElement << endl;

    cout << "The second largest element in the array is: "
         << secondLargestElement << endl;

    return 0;
}