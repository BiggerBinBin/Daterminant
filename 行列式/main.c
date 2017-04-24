
#define _CRT_SECURE_NO_WARNINGS
# include <stdio.h>
# include "head.h"
double Be;
int arrThree[3][3] = { 0 };
int arrFour[4][4] = { 0 };

int main()
{
	

	//Re = process(arrThree);

	int numb_liner = 0;

	printf("please select the liner number:3 or 4?");
	scanf("%d",&numb_liner);
	printf("the return re is%f\n", Be);
	switch (numb_liner)
	{
	case 4:
		IputFour(arrFour);
		Be = process_four(arrFour);
		break;
	case 3:
		IputThree(arrThree);
		Be = process(arrThree);
		break;
	default:
		printf("sorry, I can not able calculate\n");
		break;
	}
	//process_four(arrFour);
	//Re = process_four(arrFour);
	//printf("the liner is %lf",Be);
	printf("after the return re is%f\n", Be);
	system("pause");
	return 0;
}
