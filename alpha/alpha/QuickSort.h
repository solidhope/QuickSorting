#pragma once
#ifndef alpha_QuickSort_h
#define alpha_QuickSort_h

#include <iostream>
using namespace std;


void quickSort(int arr[], int left, int right) {
    
    int i = left, j = right;
    int tmp;
    int pivot = left + (( right - left ) / 2);
    
    while (i <= j) {
        
        while (arr[i] < pivot)
            i++;
        
        while (arr[j] > pivot)
            j--;
        
        if (i <= j) {
            
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
    }
}
    
    if (left < j)
        
        quickSort(arr, left, j);
    
    if (i < right)
        
        quickSort(arr, i, right);
}


#endif
