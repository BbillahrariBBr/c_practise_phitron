#include<stdio.h>
float make_average(int arr[], int size)
{
    float sum =0;
    for(int i =0; i<size; i++)
    {
        sum += arr[i];
    }
    return sum/size;
}
int main()
{
    int arr[7] ={2,5,9,8,7,9,72};
    float avg = make_average(arr,7);
    printf("%f", avg);

    return 0;
}
