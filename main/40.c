/*
��40�� ���д����fun���ú����Ĺ������ƶ��ַ��������ݣ��ƶ��Ĺ������£�
�ѵ�1����m���ַ���ƽ�Ƶ��ַ�������󣬰ѵ�m��1�������ַ��Ƶ��ַ�����ǰ����
*/
#define N 20
#include<string.h>

void fun(char *w, int m)
{
	/*
		wefqwefqwefw  efqwe
				   m	
		           i
	           	   j
	
	*/
	char b[N];
	int i, j = 0;
	for (i = 0; i<m; i++)
	{
		b[j] = w[i];
		j++;
	}//���ַ���w��ǰm�������ַ�������b��

	for (i = 0; i��strlen(w) - m; i++)
		w[i] = w[i + m];//�Ѻ������ǰ�ƶ�

	for (j = 0; j<m; j++)
	{
		w[i] = b[j];
		i++;
	}//������b������ٷŻ�ȥ���������ƶ����ַ�������С�ڵ���N��
	w[i] = '\0';
}