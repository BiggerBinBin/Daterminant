# define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include "head.h"
# include <stdlib.h>
# include <math.h>

double process(int arr[3][3])
{
	
	double Result = 0;
	Result =	arr[0][0] * (arr[1][1] * (arr[2][2]) - arr[2][1] * (arr[1][2])) -
				arr[0][1] * (arr[1][0] * (arr[2][2]) - arr[2][0] * (arr[1][2])) +
				arr[0][2] * (arr[1][0] * (arr[2][1]) - arr[2][0] * (arr[1][1]));
	return Result;
}

double process_four(int arr_four[4][4])
{
	double Result = 0;
	Result = (arr_four[0][0] * (arr_four[1][1] * (arr_four[2][2] * (arr_four[3][3]) - arr_four[3][2] * (arr_four[2][3])) -
							    arr_four[1][2] * (arr_four[2][1] * (arr_four[3][3]) - arr_four[3][1] * (arr_four[2][3])) +
							    arr_four[1][3] * (arr_four[2][1] * (arr_four[3][2]) - arr_four[3][1] * (arr_four[2][2])))) -//第一个三阶
			 (arr_four[0][1] * (arr_four[1][0] * (arr_four[2][2] * (arr_four[3][3]) - arr_four[3][2] * (arr_four[2][3])) -
							    arr_four[1][2] * (arr_four[2][0] * (arr_four[3][3]) - arr_four[3][0] * (arr_four[2][3])) +
							    arr_four[1][3] * (arr_four[2][0] * (arr_four[3][2]) - arr_four[3][0] * (arr_four[2][2])))) +//第二个三阶
			 (arr_four[0][2] * (arr_four[1][0] * (arr_four[2][1] * (arr_four[3][3]) - arr_four[3][1] * (arr_four[2][3])) -
							    arr_four[1][1] * (arr_four[2][0] * (arr_four[3][3]) - arr_four[3][0] * (arr_four[2][3])) +
							    arr_four[1][3] * (arr_four[2][0] * (arr_four[3][1]) - arr_four[3][0] * (arr_four[2][1])))) -//第三个三阶
		     (arr_four[0][3] * (arr_four[1][0] * (arr_four[2][1] * (arr_four[3][2]) - arr_four[3][1] * (arr_four[2][2])) -
							    arr_four[1][1] * (arr_four[2][0] * (arr_four[3][2]) - arr_four[3][0] * (arr_four[2][2])) +
							    arr_four[1][2] * (arr_four[2][0] * (arr_four[3][1]) - arr_four[3][0] * (arr_four[2][1]))));//第四个三阶

	//printf("the Resilt is %f\n",Result);
	return Result;
}
void IputThree(int arrThre[3][3])
{
	int i, j;
	for (i = 0;i < 3;i++)
		for (j = 0;j < 3;j++)
			scanf("%d", &arrThre[i][j]);

}

void IputFour(int arrFour[4][4])
{
	int i=0, j=0;
	int count = 0;
	for (i = 0;i < 4;i++)
		for (j = 0;j < 4;j++)
		{ 
			scanf("%d", &arrFour[i][j]);
			//printf("for运行了%d次\n",++count);
		}
	

}
void xun(int arr[][5],int n)
{
	int i = n;
	double Result = 0;
	int k;
	for (k = 0;k < n;k++)
	{
		//Result += arr[k][k] *  
	}
}