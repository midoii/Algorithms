#ifndef DYNAMIC_H
#define DYNAMIC_H

int max(int num1, int num2)
{
	int result;

	if (num1 > num2)
		result = num1;
	else
		result = num2;

	return result;
}


int buttom_up_cut_rod(int p[], int n)
{
	int *r = new int[n];
	r[0] = 0;
	for (int j = 1; j < n + 1; j++)
	{
		int q = -100;
		for (int i = 1; i < j + 1; i++)
			q = max(q, p[i-1] + r[j - i]);
		r[j] = q;
	}
	return r[n];
}

int cut_rod(int p[], int n)
{
	if (n == 0)
		return 0;
	int q = 0;
	for (int i = 1; i < n + 1; i++)
	{
		q = max(q, p[i - 1] + cut_rod(p, n - i));
	}
	return q;
}

#endif