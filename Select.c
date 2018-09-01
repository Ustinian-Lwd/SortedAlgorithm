nclude<stdio.h>
void SelectionSort(int *num,int n)
{
 int i = 0;
  int min = 0;
   int j = 0;
    int tmp = 0;
	 for(i = 0;i < n-1;i++)
	  {
	   	min = i;//每次讲min置成无序组起始位置元素下标 
		    for(j = i;j < n;j++)//遍历无序组，找到最小元素。 
			    {
					  if(num[min]>num[j])
					  	  {
						  	   min = j;
							   	  }
								  	}
										if(min != i)//如果最小元素不是无序组起始位置元素，则与起始元素交换位置 
											{
												  tmp = num[min];
												  	  num[min] = num[i];
													  	  num[i] = tmp;
														  	}
															 }
															 }

															 int main()
															 {
															  int num[6] = {5,4,3,2,9,1};
															   int i = 0;
															    SelectionSort(num,6);//这里需要将数列元素个数传入。有心者可用sizeof在函数内求得元素个数。 
																 for(i = 0;i < 6;i++)
																  {
																     printf("%d ",num[i]);
																	  }
																	   return 0;
																	   }
