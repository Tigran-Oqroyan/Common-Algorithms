#include <iostream>
using namespace std;

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int part = partition(arr, low, high);
        quick_sort(arr, low, part - 1);
        quick_sort(arr, part + 1, high);
    }
}

int main()
{
    int array[] = {4, 5, 66, 3, 2, 77, 5, 3};
    int length = sizeof(array) / sizeof(array[0]);

    quick_sort(array, 0, length - 1);
    printArray(array, length);
}

// ashxatum e "pivot" i hashvin vorpes pivot vercvum e array i amenamverjin andamy u mnacacy sksum en hamematvel dra het nranic poqr andamnery haytnvum en dra dzax koxmum isk aveli mecery aj koxmum . rekursiv kanchvum e quick sorty arden pivotic dzax yev aj kazmavorvac arrayneri hamar voronq sortavorvum en nuyn logikayov