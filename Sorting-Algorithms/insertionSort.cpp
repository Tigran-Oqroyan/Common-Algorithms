// fruma array i vrayov vercnuma mi hatik andam u et andamy hamematuma ira naxord andamneri het enqan jamanaka qani der bolor mecen et yntrvac andamic , u et mecery anyndhat araja talis mi hatik , minchev chi handipum aveli poqr andami u swapa anum texerov dranq

#include <iostream>
using namespace std;

void insertion_sort(int array[], int length){
    for (int i = 0; i < length; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

void print_array(int array[], int length){
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}


int main()
{
    int array[] = {4, 5, 66, 3, 2, 77, 5, 3};
    int length = sizeof(array) / sizeof(array[0]);

    print_array(array, length);
    insertion_sort(array, length);
    print_array(array, length);
}

