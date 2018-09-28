#include<stdio.h>
#include<stdlib.h>

/*
快速排序
*/


//打印的数组
void Print(int args[], int end){
    int i;

    for (i = 0; i <= end; i++){
        printf("%d,", args[i]);
    }
    printf("\n");
}

//快速排序一次划分算法
int Partition(int args[], int first, int end){

    int i,j;
    int temp;
    i = first;
    j = end;

    while (i < j){
        //进行右侧扫描
        while (i < j&&args[i] < args[j])j--;
        if (i < j){
            temp = args[i];
            args[i] = args[j];
            args[j] = temp;
            i++;
        }
        //进行左侧扫描
        while (i < j&&args[i] <= args[j]) i++;
        if (i < j){
            temp = args[i];
            args[i] = args[j];
            args[j] = temp;
            j--;
        }
    }

    return i;
}

//快速排序算法，递归调用
void QuickSort(int args[], int first, int end){
    int pivot;
    if (first < end){
        pivot = Partition(args, first, end);
        printf("排序中：");
        Print(args, end);

        QuickSort(args, first, pivot - 1);
        QuickSort(args, pivot + 1, end);
    }
}


int main(void){
    int args[] = { 23, 13, 35, 6, 19, 50, 28 };
    int first = 0;
    int end = 6;
    //打印排序前的数组
    printf("原始数组:");
    Print(args, end);
    QuickSort(args, first, end);
    printf("排序完成后的数组:");
    Print(args, end);
    system("pause");
    return 0;
}


