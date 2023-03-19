
// Java program for implementation of Bubble Sort
/*
Bubble Sort is the simplest sorting algorithm that
works by repeatedly swapping the adjacent elements if they are in the wrong order
*/

import java.util.*;
 
class BubbleSort 
{
    void bubbleSort(int arr[])
    {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++)
            //last i elements in place
            for (int j = 0; j < n - i - 1; j++)
                if (arr[j] > arr[j + 1]) {
                    // swap arr[j+1] and arr[j]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
    }
}