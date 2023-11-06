#include <stdio.h>

int main() {
  /*
  int arr[100], size=5, i, element, pos;

  // Initialize array
  arr[0] = 10;
  arr[1] = 20; 
  arr[2] = 30;
  arr[3] = 40;
  arr[4] = 50;

  // Print original array
  printf("Original Array: ");
  for(i=0; i<size; i++) {
    printf("%d ", arr[i]);
  }

  // Take input for element and position
  printf("\nEnter element  to delete: ");
  scanf("%d ", &element);

    for(i=0;i<size;i++){
        if(i!= element){
            printf(" %d ", arr[i]);
        }
    }
  
  // Print updated array
  printf("\nUpdated Array: ");
  for(i=0; i<size; i++) {
    printf("%d ", arr[i]);
  }
  */

  /*   INSERTING ELEMENT IN ARRAY
    int arr[]= {1,2,3,4,5,6,7,8,9};
    int size = 9;
    int element;
    int position;

    printf("\nEnter element to be inserted");
    scanf("%d",&element);
    printf("\nEnter position of the new element");
    scanf("%d",&position);

    for(int i = size - 1; i >= position; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position] = element;
    size++;

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
   */

    /*  DELETING ELEMENT IN ARRAY
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int element = 3;
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            found = 1;

            for (int j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
            }

            size--;
            break;
        }
    }

    if (found) {
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    } else {
        printf("Element not found in the array.");
    }
    */

   /*   LINEAR SEARCH
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            found = 1;
            printf("Element found at index %d.", i);
            break;
        }
    }

    if (!found) {
        printf("Element not found in the array.");
    }
    */

   /*   BINARY SEARCH
   int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int element = 3;
    int low = 0;
    int high = size - 1;
    int found = 0;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == element) {
            found = 1;
            printf("Element found at index %d.", mid);
            break;
        } else if (arr[mid] < element) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        printf("Element not found in the array.");
    }
   */

    /*    SUM AND AVERAGE
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    float average = (float) sum / size;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    */

   /*   MERGING TWO ARRAYS
    int arr1[] = {1, 2, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 5, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int mergedSize = size1 + size2;
    int mergedArray[mergedSize];

    for (int i = 0; i < size1; i++) {
        mergedArray[i] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        mergedArray[size1 + i] = arr2[i];
    }

    printf("Merged array: ");
    for (int i = 0; i < mergedSize; i++) {
        printf("%d ", mergedArray[i]);
    }
    */

   /*   SMALLEST AND LARGEST IN AN ARRAY
   for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }

        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    */

   /*   UNION & INTERSECTION OF ARRAY
   int arr1[] = {1, 2, 3, 4, 5};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {4, 5, 6, 7, 8};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    int unionSize = size1 + size2;
    int unionArray[unionSize];
    int intersectionSize = (size1 < size2) ? size1 : size2;
    int intersectionArray[intersectionSize];

    int k = 0;
    for (int i = 0; i < size1; i++) {
        unionArray[k++] = arr1[i];
    }

    for (int i = 0; i < size2; i++) {
        int found = 0;

        for (int j = 0; j < size1; j++) {
            if (arr2[i] == arr1[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            unionArray[k++] = arr2[i];
        } else {
            intersectionArray[i] = arr2[i];
        }
    }

    printf("Union: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", unionArray[i]);
    }

    printf("\nIntersection: ");
    for (int i = 0; i < intersectionSize; i++) {
        printf("%d ", intersectionArray[i]);
    }
    */

   /*   REMOVING DUPLICATES FROM AN ARRAY
   int arr[]={1,30,30,50,77,77,9};
    int size = sizeof(arr)/sizeof(int);
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(int k=j;k<size-1;k++){
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf(" %d ",arr[i]);
    }
    
    */

   /*   COUNTING DUPLICATES OF EACH
    int arr[] = {1, 30, 30, 50, 77, 77, 9,50,23,1,39,50,77};
    int size = sizeof(arr) / sizeof(int);
    int count = 0;

    for (int i = 0; i < size; i++) {
        count = 0; // Reset count for each element
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                for (int k = j; k < size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                size--;
                j--;
            }
        }
        if (count > 0) {
            printf("Element %d has %d duplicate(s)\n", arr[i], count);
        }
    }

    printf("\nArray with duplicates removed: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    */
  return 0;
}
