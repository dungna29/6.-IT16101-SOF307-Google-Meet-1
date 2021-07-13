#include <stdio.h>
void Bai1KhaiBaoMang()
{
	/*1. Khai báo mảng
	 <kiểu dữ liệu> <arr + tên mảng>[] = {giá trị 1,giá trị 2...}; 
	 <kiểu dữ liệu> <arr + tên mảng>[kích thước mảng số nguyên];
	 
	  Index: Bắt đầu từ số 0
	 */
	//1. Khai báo
	int arrNumber1[] = {5,6,7,8};
	int arrNumber2[5];//Khởi tạo 1 mảng gồm 5 phần tử

	//2. Lấy giá trị trong mảng thông qua index
	printf(arrNumber1[2] +7);

	//3. Gán giá trị thông index
	arrNumber1[2] = 10;

	//4. In các phần tử trong mảng dùng vòng lặp
	for (int i = 0; i < 4; i++)
	{
		printf(arrNumber1[i]);
	}
	//Nguyễn Tuấn Anh
}
void Bai2ThuatToanSapXepNoiBot()
{
	int arrNumb[] = { 44,22,55,33,11 };
	//Code lại sắp xếp tăng dần
	//20 phút giải thích trên word từng bước vòng lặp chạy đến khi dãy số được sắp xếp.(3 bạn nhanh nhất sẽ gõ vào phần chat là xong sau đó nộp bài lên google class.)
	
	for (int i = 0; i < 5; i++)
	{
		for (int j = i+1; j < 5; j++)
		{
			if (arrNumb[i] > arrNumb[j])
			{
				int temp = arrNumb[i];
				arrNumb[i] = arrNumb[j];
				arrNumb[j] = temp;
			}
		}
	}
	
	// for (int i = 0; i < 5; i++)
	// {
	// 	printf("Lan Chay Thu i = %d \n",i);
	// 	printf("Gia Tri tai vi tri %d \n", arrNumb[i]);
	// 	for (int j = i +1; j < 5; j++)
	// 	{
	// 		printf("Gia tri arrNumb[i] = %d >arrNumb[j] = %d \n", arrNumb[i], arrNumb[j]);
	// 		if (arrNumb[i] > arrNumb[j])
	// 		{
	// 			int temp = arrNumb[i];
	// 			arrNumb[i] = arrNumb[j];
	// 			arrNumb[j] = temp;
	// 		}
	// 		for (int i = 0; i < 5; i++)
	// 		{
	// 			printf("%d ", arrNumb[i]);
	// 		}
	// 		printf("\n");
	// 	}
	// 	printf("Sau khi sap xep o lan chay thu %d \n",i);
	// 	for (int i = 0; i < 5; i++)
	// 	{
	// 		printf("%d ", arrNumb[i]);
	// 	}
	// }
	printf("\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d \n",arrNumb[i]);
	}
}
int main()
{
	Bai2ThuatToanSapXepNoiBot();
}