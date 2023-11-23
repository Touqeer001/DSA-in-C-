
//  int arr[] = {3, 2, 1, 5, 2};
//  The second-largest element in the array is 5

// This code has the same time and space complexity as the previous version:

// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;
int SecondLargestElement(int arr[], int size)
{
    if (size < 2)
    {

        cout << "";
        return 0;
    }
    int PahlaBigNumber = arr[0];
    int DusraBadaNumber = arr[1];

    if (DusraBadaNumber > PahlaBigNumber)
    {
        swap(PahlaBigNumber, DusraBadaNumber);
    }
    for (int i = 2; i < size; i++)
    {
        if (arr[i] > PahlaBigNumber)
        {
            DusraBadaNumber = PahlaBigNumber;
            PahlaBigNumber = arr[i];
        }
        else if (arr[i] > DusraBadaNumber)
        {
            DusraBadaNumber = arr[i];
        }
    }
    std::cout << "The second-largest element in the array is: " << DusraBadaNumber << std::endl;
}

int main()
{
    int arr[] = {3, 2, 1, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    SecondLargestElement(arr, size);

    return 0;
}

// ---------------------Understandin this loop----------------
// ---------------------Understandin this loop----------------
//  if (arr[i] > PahlaBigNumber)
//         {
//             DusraBadaNumber = PahlaBigNumber;
//             PahlaBigNumber = arr[i];
//         }
//         else if (arr[i] > DusraBadaNumber)
//         {
//             DusraBadaNumber = arr[i];
//         }
//     }

//  go through all the iterations of the loop with the correct comparisons:

// Initialization:

// PahlaBigNPahlaBigNumber
//    DusraBadaNumber: 2
// Iteration 1 (i = 2):

// arr[2] is 1.
// Condition arr[i] > PahlaBigNumber(1 > 3) is false.
// Condition arr[i] > DusraBadaNumber (1 > 2) is false.
// No updates to firstMax and secondMax.
// Iteration 2 DusraBadaNumber
// arr[3] is 5.
// Condition arr[i] > fPahlaBigNumber(5 > 3) is true.
// DusraBadaNumber is updated to the current value of PahlaBigNumber (2 becomes 3).
// PahlaBigNumber is updated to the current value of arr[i], which is 5.
// Iteration 3 (i = 4):

// arr[4] is 2.
// Condition arr[i] > PahlaBigNumber (2 > 5) is false.
// Condition arr[i] > DusraBadaNumber (2 > 3) is false.
// No updates to PahlaBigNumber and DusraBadaNumber.
// After the Loop:

// PahlaBigNumber: 5 (the maximum element in the array)
// DusraBadaNumber: 3 (tDusraBadaNumber maximum element in the array)
