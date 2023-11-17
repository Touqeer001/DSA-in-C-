#include <iostream>
using namespace std;

void printEndToStart(int start, int end)
{

    // base case
    if (start < end)  //4<1 //3<1 //check 2<1
    {
        return;
    }
    // recursive case
    cout << start;    //start=4 //3
    printEndToStart(start - 1, end);    //4-1=3,end=1   3-1,end=1   
}

int main()
{
    printEndToStart(4, 1);
    //second update
     //printEndToStart(3,1)
     //Third Time call
     //printEndToStart(2,1)


    return 0;
}