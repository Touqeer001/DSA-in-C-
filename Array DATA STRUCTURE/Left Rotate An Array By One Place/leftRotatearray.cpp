

// Question; left rotate an array by one place
// Original Array: 1 2 3 4 5
//  Array after Left Rotation by One: 2 3 4 5 1

#include <iostream>
using namespace std;
#include <vector>

int LeftRotate(int arr[], int size)

{
    int temp = arr[0]; // Store the first element
    for (int i = 0; i < size - 1; i++)
    {
        arr[i] = arr[i + 1]; // Move each element one position to the left
    }
    arr[size - 1] = temp; // Set the last element to the stored first element
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    LeftRotate(arr, size);
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}

// vector initilise STL

// vector<int>myVector={1,2,3,4,5};
// myVector.push_back(1);   // To Add Element in the array
// myVector.pop_back();  //TO remove the Element in the array

// //for loop in vector
// for(auto it-myVector.begin();it !=myVector.end();i++);
// cout<<*it;