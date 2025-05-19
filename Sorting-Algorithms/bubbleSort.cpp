#include <iostream>
using namespace std;

void bubble_sort(int array[], int length){
    bool swapped;
    for (int i = 0; i < length - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < length - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
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
    bubble_sort(array, length);
    print_array(array, length);

}

// fruma arrayi vrayov array.length angam xosqi 5 angam , u amen angam hamematuma erku harevan andamnery , ete arajiny erkrordic meca uremn swapa anum dranq