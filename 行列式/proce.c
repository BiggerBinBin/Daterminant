#define _CRT_SECURE_NO_WARNINGS
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

double process_four(int **arr_four)
{
	double Result = 0;
	Result = arr_four[0][0] * (arr_four[1][1] * (arr_four[2][2] * (arr_four[3][3]) - arr_four[3][2] * (arr_four[2][3])) -
							   arr_four[1][2] * (arr_four[2][1] * (arr_four[3][3]) - arr_four[3][1] * (arr_four[2][3])) +
							   arr_four[1][3] * (arr_four[2][1] * (arr_four[3][2]) - arr_four[3][1] * (arr_four[2][2]))) -//第一个三阶
			 arr_four[0][1] * (arr_four[1][0] * (arr_four[2][0] * (arr_four[3][2]) - arr_four[3][0] * (arr_four[2][2])) -
							   arr_four[1][2] * (arr_four[1][0] * (arr_four[2][2]) - arr_four[2][0] * (arr_four[1][2])) +
							   arr_four[1][3] * (arr_four[1][0] * (arr_four[2][1]) - arr_four[2][0] * (arr_four[1][1]))) +
			 arr_four[0][2] * (arr_four[0][0] * (arr_four[1][1] * (arr_four[2][2]) - arr_four[2][1] * (arr_four[1][2])) -
							   arr_four[0][1] * (arr_four[1][0] * (arr_four[2][2]) - arr_four[2][0] * (arr_four[1][2])) +
							   arr_four[0][2] * (arr_four[1][0] * (arr_four[2][1]) - arr_four[2][0] * (arr_four[1][1]))) -
		     arr_four[0][3] * (arr_four[0][0] * (arr_four[1][1] * (arr_four[2][2]) - arr_four[2][1] * (arr_four[1][2])) -
							   arr_four[0][1] * (arr_four[1][0] * (arr_four[2][2]) - arr_four[2][0] * (arr_four[1][2])) +
							   arr_four[0][2] * (arr_four[1][0] * (arr_four[2][1]) - arr_four[2][0] * (arr_four[1][1])));
}
void Iput(int arrThre[3][3])
{
	int i, j;
	for (i = 0;i < 3;i++)
		for (j = 0;j < 3;j++)
			scanf("%d", &arrThre[i][j]);

}