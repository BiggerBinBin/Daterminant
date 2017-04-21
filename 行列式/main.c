

# include <stdio.h>
int arrThree[3][3] = { 0 };
int arrFour[4][4] = { 0 };
int main()
{
	double Re;
	//Re = process(arrThree);
	Iput(arrThree);
	Re = process(arrThree);
	printf("行列式的值是：%.2f",Re);

	system("pause");
	return 0;
}
