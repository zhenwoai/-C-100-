/*
��42�� ���г�������n��n�Ķ�ά���飬
�������������Զ���ֵ�����д����fun(int a[][n],int n),
�ú����Ĺ����ǣ����������ϰ�����Ԫ���е�ֵ����m��

*/

#define N 20
void fun(int a[][N], int m)
{/*
 1 2 3   1 2m 3m
 4 5 6   4 5  6m   
 7 8 9   7 8  9
 
 
 */
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			if (i < j) a[i][j] *= m;
		}

}