#include<stdio.h>
void bubble(int arr[]){
    int size = 5;
    int i, j;
    for(i = 0; i < size; i++){
        for(j = 0; j  < size - i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int arr[] = {5, 4, 3, 2, 1};
    bubble(arr);
    int i;
    for(i = 0; i < 5; i++){
        printf("%d", arr[i]);
    }
    return 0;
}