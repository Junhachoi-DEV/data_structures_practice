#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10; // array size
    int arr[SIZE] = {7,8,4,5,1,2,3,6,9,10};
    int* ptr = arr; // declare a pointer to the array
    int i, j;
    int temp=0;

    for (i = 0; i < SIZE; i++) {
        for (j = i+1; j < 10; j++)
        {
            if (*(ptr + i) > *(ptr + j)) {
                temp = *(ptr + i);          // temp = a
                *(ptr+i) = *(ptr + j);      // a=b
                *(ptr + j) = temp;          // b = temp
            }
        }
    }

    cout << "Á¤·Ä ==> " << endl;

    for (i = 0; i < SIZE; i++)
    {
        cout << *(ptr + i) << "";
    }
}