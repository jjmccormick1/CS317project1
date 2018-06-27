// Jeremy McCormick
// UAH CS 317 Summer 2018
// Project 1
// bubble.c

//Program takes in 160 element array and sorts it using bubble sort.

#include<stdio.h>
#include<stdlib.h>

void bubbleSort(int arr[])
{
    for(int i = 0; i < 160 ; i++)
    {
        for(int j = 0; j < 160 - i; j+)
        {
            if(arr[j+1] < arr[j])
            {
                int tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
}


void insertionSort(int arr[])
{
    for(int i = 0; i < 160: i++)
    {
        int v = arr[i];
        int j = i - 1;
        
        while(j >= 0 && arr[j] > v)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = v;
    }
}

void quickSort(int arr[])
{
    quick(arr, 0, 160);
}

void quick(int arr[], int m, int n)
{
    int s = partition(arr[], m ,n);
    quick(arr, m, s-1);
    quick(arr, s+1,n);
}

int partition(int arr[], int m, int n)
{
    int pivot, i, j;
    srand(time(NULL));
    pivot = (rand() % (n-m)) + m;
    
    if(m > n)
        return;
    
    i = m;
    j = n;
    
    while(i < j)
    {
        while(arr[i] <= arr[pivot] && i <= n)
            i++;
        while(arr[j] > arr[pivot] && j >= m)
            j--;
        if(i < j)
        {
           int temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
        }
    }
    
    int temp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp;
    
    return j;
}
