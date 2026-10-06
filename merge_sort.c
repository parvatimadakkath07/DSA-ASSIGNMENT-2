#include <stdio.h>
void printArray(int a[], int n){for(int i=0;i<n;i++)printf("%d ",a[i]);printf("\n");}
void merge(int a[],int l,int m,int r,int n){
 int t[100],i=l,j=m+1,k=l;
 while(i<=m&&j<=r){if(a[i]<=a[j])t[k++]=a[i++];else t[k++]=a[j++];}
 while(i<=m)t[k++]=a[i++]; while(j<=r)t[k++]=a[j++];
 for(i=l;i<=r;i++)a[i]=t[i]; printArray(a,n);
}
void mergeSort(int a[],int l,int r,int n){
 if(l<r){int m=(l+r)/2;mergeSort(a,l,m,n);mergeSort(a,m+1,r,n);merge(a,l,m,r,n);}
}
int main(){
 int a[]={324,125,456,218,102,389,275,147},n=8;
 printf("Merge Sort trace (after each merge):\n");
 mergeSort(a,0,n-1,n);
 printf("Final sorted sequence:\n");printArray(a,n);return 0;
}
