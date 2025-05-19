#include <iostream>
using namespace std;

void print_array(int array[], int length){
    for (int i = 0; i < length; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}


void counting_sort(int array[], int length){
    int max = array[0];
    for(int i = 0; i < length; i++){
        if(array[i] > max){
            max = array[i];
        }
    }

    int count[max + 1];

    for(int i = 0 ; i <= max; i++){
        count[i] = 0;
    }

    for(int i = 0; i < length; i++){
        count[array[i]]++;
    }

    int index = 0;
    for(int i = 0; i <= max; i++){
        while(count[i] > 0){
            array[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main()
{
    int array[] = {4, 5, 66, 3, 2, 77, 5, 3};
    int length = sizeof(array) / sizeof(array[0]);
    counting_sort(array, length);
    print_array(array, length);

}

// ashxatuma hetevyal logikayov stugum enq te iskakan array i mej amen andamic qani hat ka u qanaky pahum enq mi hat urish array i mej "count" HAMAPATASXAN INDEXI tak , heto pttvelov count array i vrayov yst qanaki sharum enq hamapatasxan tvery iskakan array i mej