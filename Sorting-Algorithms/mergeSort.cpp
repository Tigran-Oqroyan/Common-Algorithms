#include <iostream>
using namespace std;

void printArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1; // Size of left subarray;
    int n2 = right - mid;    // Size of right subarrray;

    int Left[n1], Right[n2];

    for (int i = 0; i < n1; i++)
    {
        Left[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++)
    {
        Right[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while (i < n1 && j < n2)
    {
        if (Left[i] <= Right[j])
        {
            arr[k] = Left[i];
            i++;
        }
        else
        {
            arr[k] = Right[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = Left[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = Right[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int left, int right)
{
    if (left < right)
    {
        int middle = left + (right - left) / 2;
        merge_sort(arr, left, middle);
        merge_sort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

int main()
{
    int array[] = {4, 5, 69, 3, 2, 77, 5, 3};
    int length = sizeof(array) / sizeof(array[0]);

    merge_sort(array, 0, length - 1);
    printArray(array, length);
}

// ashxatum e "pivot" i hashvin vorpes pivot vercvum e array i amenamverjin andamy u mnacacy sksum en hamematvel dra het nranic poqr andamnery haytnvum en dra dzax koxmum isk aveli mecery aj koxmum . rekursiv kanchvum e quick sorty arden pivotic dzax yev aj kazmavorvac arrayneri hamar voronq sortavorvum en nuyn logikayov