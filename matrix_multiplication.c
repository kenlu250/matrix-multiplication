#include<stdlib.h>
#include<stdio.h>
void tk(int*, int*, int*);
void pb(int,int,int*);
int main(){
 int arr1[3][3], arr2[3][3], arr3[3][3], i, j;
 printf("請輸入矩陣一...\n");
 for(i=0;i<3;i++)
  for(j=0;j<3;j++){
   printf("m1[%d][%d]:",i,j);
   scanf("%d",&arr1[i][j]);
  }
 printf("請輸入矩陣二...\n");
 for(i=0;i<3;i++)
  for(j=0;j<3;j++){
   printf("m2[%d][%d]:",i,j);
   scanf("%d",&arr2[i][j]);
  }
 tk(arr1[0],arr2[0],arr3[0]);
 printf("\n矩陣一\n");
 pb(3,3,arr1[0]);
 printf("\n矩陣二\n");
 pb(3,3,arr2[0]);
 printf("\n矩陣三\n");
 pb(3,3,arr3[0]);
 system("PAUSE");
 return 0;
}
void tk(int* a1,int* a2,int* a3){
 int i;
 for(i=0;i<(3*3);i++){
  *(a3+i) = *(a1+i)**(a2+i);
 }
}
void pb(int x,int y,int* d){
 int i, j;
 for(i=0;i<x;i++){
  for(j=0;j<y;j++)
  printf("  %2d",*(d+i*y+j));
  printf("\n");
 }
}
