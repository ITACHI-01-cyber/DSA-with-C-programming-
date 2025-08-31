#include<stdio.h>


// INTIALIZING ARRAYS

    // int main(){
    //     int a[5] = { 12,32,21,43,456};
    //     for(int i = 0; i < 5; i++){
    //         printf("The array is : %d \n", a[i]);
    //     }
    // }

// user input 

    // int main() {
    //     int a[50],size;
    //     printf("ENTER THE SIZE :");
    //     scanf("%d", & size);
    //     printf("enter the elements of arrays:");
    //     for (int i = 0; i < size; i++)
    //     {
    //         scanf("%d",& a[i]);
    //     }
    //     for (int j = 0; j < size; j++)
    //     {
    //     printf("the Array elements is : %d \n", a[j]);
    //     }
    // }

//shifting in arrays to insert mid 

    // int main(){
    //     int a[10];
    //     int size, num,pos;
    //     printf("ENTER THE SIZE OF ARRAY:");
    //     scanf("%d", & size);
    //     printf("ENTER ELEMENTS IN ARRAYS:");
    //     for (int i = 0; i < size; i++)
    //     {
    //         scanf("%d",& a[i]);
    //     }
    //     if (size > 10)
    //     {
    //         printf("overflow");
    //     }else
    //     {
    //         printf("enter data want to insert:");
    //         scanf("%d",&num);
    //         printf("Enter position:");
    //         scanf("%d",&pos);
    //         if(pos <= 0 || pos > size + 1){
    //             printf("errore , postion is greater then size");
    //         }else
    //         {
    //         for (int j = size - 1 ; j < pos -1 ; j--)
    //     {
    //         a[j + 1] = a[j];
    //     }
    //     a[pos - 1] = num;
    //     size ++;
    //         }
    //     }
    //     for (int c = 0; c < size; c++)
    //     {
    //         printf("The element of array is: %d \n ",a[c]);
    //     }

    // }

// add at the beggining of array

    // int main(){
    //     int a[10];
    //     int size, num,pos;
    //     printf("ENTER THE SIZE OF ARRAY:");
    //     scanf("%d", & size);
    //     printf("ENTER ELEMENTS IN ARRAYS:");
    //     for (int i = 0; i < size; i++)
    //     {
    //         scanf("%d",& a[i]);
    //     }
    //     if (size > 10)
    //     {
    //         printf("overflow");
    //     }else
    //     {
    //         printf("enter data want to insert:");
    //         scanf("%d",&num);
    //         printf("Enter position:");
    //         scanf("%d",&pos);
    //         if(pos <= 0 || pos > size + 1){
    //             printf("errore , postion is greater then size");
    //         }else
    //         {
    //         for (int j = size - 1 ; j >= 0 ; j--)
    //     {
    //         a[j + 1] = a[j];
    //     }
    //     a[0] = num;
    //     size ++;
    //         }
    //     }
    //     for (int c = 0; c < size; c++)
    //     {
    //         printf("The element of array is: %d \n ",a[c]);
    //     }
    // }

// DELETION IN ARRAY
    // int main(){
    // int a[10];
    //     int size, num,pos;
    //     printf("ENTER THE SIZE OF ARRAY:");
    //     scanf("%d", & size);
    //     printf("ENTER ELEMENTS IN ARRAYS:");
    //     for (int i = 0; i < size; i++)
    //     {
    //         scanf("%d",& a[i]);
    //     }
    //     printf("Enter element to delete:");
    //     scanf("%d", & pos);
    //     if (pos <= 0|| pos > size)
    //     {
    //         printf("invalis position Enter!!!");
    //     }else{
    //          for(int j = pos -1; j < size -1 ; j++){
    //             a[j] = a[j + 1];
    //     }
    //     size--;
    //     }
    //         for (int c = 0; c < size; c++)
    //     {
    //         printf("The element of array is: %d \n ",a[c]);
    //     }
    // }

// Pointer in Array

    // int main(){
    //    int a[] = { 1,2,3,45,6,7};
    //    int *q;
    //    q = a;
    //    printf("%p \n",a);
    //    printf("%p \n",q);
    // }

//2D ARRAYS 

    // int main(){
    //     int arr[3][3];
    //     printf("ENTER ELEMENTS:");
    //     for(int i = 0; i < 3; i++){
    //         for(int j = 0; j < 3; j++){
    //             scanf("%d",& arr[i][j]);
    //         }
    //     }
    //     printf("Array Matrix is: \n");
    //     for(int i = 0; i < 3; i++){
    //         for(int j = 0; j < 3; j++){
    //             printf("%d \t", arr[i][j]);
    //         }
    //         printf("\n");
    //     }
    // }

// LINEAR SEARCH IN ARRAY

    // int main(){
    //     int a[10] = {1,2,3,4,5,6,7,8,9,10};
    //     int data , i;
    //     printf("ENTER A KEY TO SEARCH LINER DATA:");
    //     scanf("%d",& data);
    //     int n =10;
    //     for(int i =0; i < n; i++){
    //         if(a[i] == data){
    //             printf("Element found at index: %d", i);
    //             printf("\n");
    //             break;
    //         }
    //     }
    //     if( i == n || data > n){
    //         printf("Not found!!");
    //     }
    // }


// FIND GREATEST ELEMENT IN AN ARRAY

    // int main(){
    //     int arr[10] = {23,43,54,23,14,19,01,8,2};
    //     int max = arr[0];
    //     int n = sizeof(arr)/ sizeof(arr[0]);
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (arr[i] > max)
    //         {
    //             max = arr[i];
    //         }
    //     }
    //     printf("THE GREATEST OR MAXIMUN IN ARRAY IS: %d",max);
    // }

// SAMLLEST ELEMENT IN AN ARRAY

// int main() {
//     int arr[] = {23, 43, 54, 23, 14, 19, 8, 2, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int min = arr[0];

//     for (int i = 1; i < n; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }

//     printf("Smallest element in the array is: %d\n", min);
//     return 0;
// }

// BINARY SEARCH

    int main(){
            int a[10] = {1,2,3,4,5,6,7,8,9,10};
        int data , i;
        printf("ENTER A KEY TO SEARCH LINER DATA:");
        scanf("%d",& data);
        int n =10;

    }

       