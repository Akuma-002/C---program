#include<stdio.h>
void selection (int arr[], int size){
    int i,j;
    for(i =0; i < size -1; i++){
        int min = i;
        for(j = i; j < size; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
void display(int arr[], int size){
    int i;
    for(i = 0; i< size; i++){
        printf("%d", arr[i]);
    }
}
int main(){
    int arr [] = {5, 4, 3, 2, 1};
    int size = sizeof(arr)/ sizeof(arr[0]);
    selection(arr, size);
    display(arr, size);
}