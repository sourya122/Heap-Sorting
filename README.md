# Heap-Sorting

Heap sort is a comparison-based sorting technique based on Binary Heap data structure. It is similar to the selection sort where we first find the minimum element and place the minimum element at the beginning. Repeat the same process for the remaining elements.

First convert the array into heap data structure using heapify, then one by one delete the root node of the Max-heap and replace it with the last node in the heap and then heapify the root of the heap. Repeat this process until size of heap is greater than 1.
1. Build a heap from the given input array.
2. Repeat the following steps until the heap contains only one element:
3. Swap the root element of the heap (which is the largest element) with the last element of the heap.
4. Remove the last element of the heap (which is now in the correct position).
5. Heapify the remaining elements of the heap.
6. The sorted array is obtained by reversing the order of the elements in the input array.

Complexity Analysis of Heap Sort

Time Complexity: O(N log N)

Auxiliary Space: O(log n), due to the recursive call stack. However, auxiliary space can be O(1) for iterative implementation.
