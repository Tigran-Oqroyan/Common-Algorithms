#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print_array(int array[], int length){
    for(int i = 0; i < length; i++){
        cout << array[i] << " ";
    }
    cout << endl;
}

void bucket_sort(int array[], int length){
    if(length <= 0) return;
    
    // find maximum
    int max_value = array[0];
    for(int i = 0;i < length; i++){
        if(array[i] > max_value){
            max_value = array[i];
        }
    }

    // create buckets
    int bucket_count = 10;
    vector<vector<int>> buckets(bucket_count);

    // put array items into buckets
    for(int i = 0; i < length; i++){
        int index = (array[i] * bucket_count) / (max_value + 1); // normalization
        buckets[index].push_back(array[i]);
    }

    // sort each bucket (we can use insertion/selection sort if needed)
    for(int i = 0; i < bucket_count; i++){
        sort(buckets[i].begin(), buckets[i].end());
    }

    // concatenate all buckets into the original array
    int index = 0;
    for(int i = 0; i < bucket_count; i++){
        for(int j = 0; j < buckets[i].size(); j++){
            array[index++] = buckets[i][j];
        }
    }

}

int main(){
    int array[] = {3,4,65,67,77,2,13,4,54};
    int length = sizeof(array) / sizeof(array[0]);

    print_array(array, length);
    bucket_sort(array, length);
    print_array(array, length);
}
