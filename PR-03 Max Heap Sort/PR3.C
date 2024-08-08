#include<stdio.h>
void max_heapify(int *,int);
void build_max_heap(int *,int);
void heapsort(int *,int);
void swap(int*,int*);
int heapsize;
int main()
{
    int *arr,n,i;
    printf("Enter no. of elements = ");
    scanf("%d",&n);
    arr=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        printf("Enter array elements = ");
        scanf("%d",&arr[i]);
    }
    n;
    heapsort(arr,n);
    printf("\nAfter heapsort \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
void heapsort(int *arr,int n)
{
    int i;
    build_max_heap(arr,n);
    for(i= n-1;i>=1;i--)
    {
        swap(&arr[0],&arr[i]);
        heapsize = heapsize -1;
        max_heapify(arr,0);
    }
}
void max_heapify(int *arr,int i)
{
    int l=2*i,r=2*i+1,largest;
    if(l<heapsize && arr[l]>arr[i])
        largest = l;
    else
        largest = i;
    if(r<heapsize && arr[r]>arr[largest])
        largest = r;
    if(largest != i)
    {
        swap(&arr[i],&arr[largest]);
        max_heapify(arr,largest);
    }
}
void build_max_heap(int *arr,int len)
{
    heapsize = len;
    int i;
    for(i =len/2;i>=0;i--)
    {
         max_heapify(arr,i);
    }
}
void swap(int *a ,int *b)
{
    int temp = *a;
    *a= *b;
    *b= temp;
}
