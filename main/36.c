/*
��36�� �ٶ�������ַ�����ֻ������ĸ��*�š�
���д����fun�����Ĺ����ǣ����ַ����е�ǰ��*��ȫ���Ƶ��ַ�����β����
1���ַ���ָ��
1 n��¼ǰ���ж��ٸ�'*'  ��pָ���һ������'*'��
2 ȡp������������ǰ�ƶ�
3 �����n��'*'

*/


void fun(char *a)
{
	int i = 0, n = 0;
	char *p;
	p = a;

	/*
	a     wefw**e*wergq***
	                  p
	
	*/
	while (*p == '*')
	{
		n++;
		p++;
	}
	//nΪ�ַ���ǰ��'*'����

	while (*p)//������ǰ�ƶ�
	{
		a[i] = *p;
		i++;
		p++;
	}

	while (n != 0)
	{//��󲹹�n��'*'
		a[i] = '*';
		i++;
		n--;
	}
	a[i] = '\0';
}