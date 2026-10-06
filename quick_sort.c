#include <stdio.h>
void swap(int*a,int*b){int t=*a;*a=*b;*b=t;}
void printArray(int a[],int n){for(int i=0;i<n;i++)printf("%d ",a[i]);printf("\n");}
int partition(int a[],int low,int high,int n){
 int pivot=a[high],i=low-1;
 for(int j=low;j<high;j++)if(a[j]<=pivot){i++;swap(&a[i],&a[j]);}
 swap(&a[i+1],&a[high]); printf("Pivot %d -> ",pivot);printArray(a,n);return i+1;
}
void quickSort(int a[],int low,int high,int n){
 if(low<high){int p=partition(a,low,high,n);quickSort(a,low,p-1,n);quickSort(a,p+1,high,n);}
}
int main(){
 int a[]={324,125,456,218,102,389,275,147},n=8;
 printf("Quick Sort partition trace:\n");quickSort(a,0,n-1,n);
 printf("Final sorted sequence:\n");printArray(a,n);return 0;
}
