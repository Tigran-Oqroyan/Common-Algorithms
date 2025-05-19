#include <iostream>
using namespace std;

int getMax(int arr[], int length){
    int max = arr[0];
    for(int i = 1; i < length; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void print_array(int array[], int length){
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void counting_sort(int array[], int length, int exp){
    int output[length];
    int count[10] ={};

    for(int i =0 ; i < length; i++){
        count[(array[i] / exp) % 10]++;
    }

    for(int i = 1; i < 10; i++){
        count[i] += count[i-1];
    }

    for(int i = length - 1; i >= 0; i--){
        int digit = (array[i] / exp) % 10;
        output[count[digit] - 1] = array[i];
        count[digit]--;
    }

    for(int i = 0; i < length; i++){
        array[i] = output[i];
    }
}

void radix_sort(int array[], int length){
    int max = getMax(array, length);
    cout << max << endl;
    for(int exp = 1;  max / exp > 0; exp *= 10){
        counting_sort(array, length, exp);
    }
}

int main()
{
    int array[] = {4, 5, 66, 3, 2, 77, 5, 3};
    int length = sizeof(array) / sizeof(array[0]);

    print_array(array, length);
    radix_sort(array, length);
    print_array(array, length);
}

// sortavoruma tvery yst dranc tvanshannery skzbun miavornerov heto tqsnavornerov yev ayln