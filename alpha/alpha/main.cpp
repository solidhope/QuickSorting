#pragma once
#include <iostream>
using namespace std;

int main()
{
    
    cout << "Enter ten unsorted integers \n" << endl;
    
    int a[10];
    for (int i = 0; i < 10; ++i) {
        
        cout << "[" << i << "] = ";
        cin >> a[i];
    }
    
    cout << "Sorted List = ";
    quickSort(a, 10);

 
    return 0;
    
}