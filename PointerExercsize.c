#include <stdio.h>

/*int main(){
 int x = 5;
 int y = 8;
 int *xp = &x;
 int *yp = &y;
 int c = *xp + *yp;
 printf("%d",c);
 return 0;

 //void median();
 //median();
 void sort();
 sort();
} */
void median(){
    int arr[] = {1,2,3,4,5};
    int *ptr = &arr;
    int x=0;
    for (int i=0;i<5;i++){
        x+=*ptr;
        ptr++;
    }
    printf("%d",x/5);
}
void sort(){
    void swap(int *pa,int *pb);
    int arr[] = {2,5,3,1,4};
    int *ptr = &arr[0];
    for (int i=0;i<5;i++){
        for (int i=0;i<5;i++){
            if (*ptr > *(ptr+1)){
                swap(ptr,ptr+1);
            }
            ptr++;
        }
        ptr = &arr[0];
    }
    for (int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
}
void swap (int *pa, int *pb){
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

