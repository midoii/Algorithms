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

int matrix_chain_order(int* p,int** m,int** s,int n)
{
	for (int l = 2; l < n + 1; l++)
	{
		for (int i = 0; i < n - l + 1; i++)
		{
			int j = i + l - 1;
			m[i][j] = 500000;
			for (int k = i; k < j; k++)
			{
				int q = m[i][k] + m[k + 1][j] + p[i] * p[k+1] * p[j+1];
				if (q < m[i][j])
				{
					m[i][j] = q;
					s[i][j] = k+1;
				}
			}
		}
	}
	return 0;
}

int print_optimal_parens(int** s, int i, int j)
{
	if (i == j)
	{
		std::cout << "A" << i;
	}
	else
	{
		std::cout << "(";
		print_optimal_parens(s, i, s[i-1][j-1]);
		print_optimal_parens(s, s[i-1][j-1] + 1, j);
		std::cout << ")";
	}
	return 0;
}
#endif