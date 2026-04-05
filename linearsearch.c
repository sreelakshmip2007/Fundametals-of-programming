#include <stdio.h>
int linearSearch(int arr[], int size, int target) 
{
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int data[100],n,target;
    printf("ENTER NO OF ELEMENTS OF ARRAY:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {  
        scanf("%d",&data[i]);
    }
    printf("ENTER ELEMENT TO BE SEARCHED");
    scanf("%d",&target);
    int result = linearSearch(data,n,target);

    if (result != -1) {
        printf("Element %d found at index %d\n", target, result+1);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
