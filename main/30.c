/*
��30�� ���дһ������fun�����Ĺ����ǣ�
���һ��2��m���Ͷ�ά���������Ԫ�ص�ֵ��������ֵ���ص��ú�����
1��ͨ����
2ָ�����
*/
#define M 4
fun(int a[][M])
{
	int i, j, max = a[0][0];
	for (i = 0; i < 2; i++)
		for (j = 0; j < M; j++)
			if (max < a[i][j])
				max = a[i][j]; /*�����ά��������ֵ*/
	return max;
}