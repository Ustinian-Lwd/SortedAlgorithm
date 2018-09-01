#include<stdio.h>
//冒泡排序算法
void bubbleSort(int *arr, int n) {
    for (int i = 0; i<n - 1; i++)
	        for (int j = 0; j < n - i - 1; j++)
			        {
					            //如果前面的数比后面大，进行交换
								            if (arr[j] > arr[j + 1]) {
											                int temp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = temp;
															            }
																		        }
																				}
																				int main() {
																				    int arr[] = { 10,6,5,2,3,8,7,4,9,1 };
																					    int n = sizeof(arr) / sizeof(int);
																						    bubbleSort(arr, n);
																							    printf("排序后的数组为：\n");
																								    for (int j = 0; j<n; j++)
																									        printf("%d ", arr[j]);
																											    printf("\n"); 
																												    return 0;
