// fruma arrayi vrayov vercnelov amen mi andamy, et vercrac angamy hamematuma mnacac andamneri het (iranic heto) gtnuma iranic amenapoqr andamy et mnacaca zangcaci mej u swapa anum

#include <iostream>
using namespace std;

void print_array(int array[], int length){
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void selection_sort(int array[], int length){
    for (int i = 0; i < (length - 1); i++)
    {
        int min = i;
        for (int j = i + 1; j < length; j++)
        {
            if (array[min] > array[j])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}

int main()
{
    int array[] = {4, 5, 66, 3, 2, 77, 5, 3};
    int length = sizeof(array) / sizeof(array[0]);

    print_array(array, length);
    selection_sort(array, length);
    print_array(array, length);
}

