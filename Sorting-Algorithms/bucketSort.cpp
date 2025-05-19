#include <iostream>
using namespace std;

void print_array(int array[], int length){
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void bucket_sort(int array[], int length){
    
}

int main()
{
    int array[] = {4, 5, 66, 3, 2, 77, 5, 3};
    int length = sizeof(array) / sizeof(array[0]);

    print_array(array, length);
    bucket_sort(array, length);
}

// fruma arrayi vrayov vercnelov amen mi andamy, et vercrac angamy hamematuma mnacac andamneri het (iranic heto) gtnuma iranic amenapoqr andamy et mnacaca zangcaci mej u swapa anum