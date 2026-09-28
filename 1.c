#include<stdio.h>
#include<time.h>

void BubbleSort(int arr[],int n){
    int i,j,temp;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }    
        }
        
    }
    
}

void InsertionSort(int arr[],int n){
    int i,j,key;

    for (int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i-1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
}

void selectionSort(int arr[],int n){
    int i,j,min,temp;

    for (int i = 0; i < n-1; i++)
    {
        min = i;

        for (int j = i+1; j < n; i++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    
}



// QUICK SORT

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    int j, temp;

    for(j = low; j < high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;

            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}



// MERGE SORT

void merge(int arr[], int low, int mid, int high)
{
    int temp[1000];
    int i = low, j = mid + 1, k = low;

    while(i <= mid && j <= high)
    {
        if(arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while(i <= mid)
        temp[k++] = arr[i++];

    while(j <= high)
        temp[k++] = arr[j++];

    for(i = low; i <= high; i++)
        arr[i] = temp[i];
}

void mergeSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}


int main(){
    int n,i;

    printf("Enter a number of array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter a elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    

    clock_t start,end;
    double time_taken;

    start = clock();

    BubbleSort(arr,n);

    end = clock();

    time_taken = (double) (end-start)/CLOCKS_PER_SEC;

    printf("Sorted array is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }

    printf("%f",time_taken);
    
}