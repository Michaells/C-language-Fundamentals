//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	//1.�T�w�n�X��
//	int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]); //���D�X�b�o��  4/4=1
//	for (i = 0; i < sz-1; i++)
//	{
//		int flag = 1; //���]����ƧǤw�g����
//		//�C��bubble_sort
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;  //����ƧǦ��洫
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//("0218 lesson_array_bubble_sort")
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	bubble_sort(arr, sz); //��ڶǹL�h����arr�������a�}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}