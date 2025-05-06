#include<stdio.h>
void insertion(int arr[], int size){
    int i;
    for(i = 1; i < size; i++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main (){
    int arr [] = {5, 4, 3, 2, 1};
    int i, size = sizeof(arr)/sizeof(arr[0]);
    insertion(arr, size);
    for(i =0; i < size; i++){
        printf("%d", arr[i]);
    }
}