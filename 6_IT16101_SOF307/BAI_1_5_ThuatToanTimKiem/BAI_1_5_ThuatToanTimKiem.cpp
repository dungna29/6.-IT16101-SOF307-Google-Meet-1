#include <stdio.h>
//1. Tìm số lớn nhất
void TimMax(int arrNumber[])
{
	int max = arrNumber[0];
	for (int i = 1; i < 6; i++)
	{
		if (max< arrNumber[i])
		{
			max = arrNumber[i];
		}
	}
	printf_s("Max: %d", max);
	
}
//2. Tìm kiếm số 33 ở trong mảng số nguyên
void TimViTriCuaSoCanTim(int arrNumber[], int soCanTim)
{	
	for (int i = 0; i < 6; i++)
	{
		if (arrNumber[i] == soCanTim)
		{
			printf_s("So can tim %d có vi tri: %d \n", soCanTim, i);			
			return;
		}		
	}
	printf_s("Khong tim thay");
}
int TimViTriCuaSo(int arrNumber[], int soCanTim)
{
	for (int i = 0; i < 6; i++)
	{
		if (arrNumber[i] == soCanTim)
		{
			return i;
		}		
	}
	return -1;
}
int main()
{
	int arrNumber[] = { 35,27,36,33,55,11 };
	//TimViTriCuaSoCanTim(arrNumber, 99);
	TimMax(arrNumber);
}