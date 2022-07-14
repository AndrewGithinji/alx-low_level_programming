/**
* reverse_array - reverses contents of an array
* @a: first pointer
* @n: second parameter
* Return: 0
*/
void reverse_array(int *a, int n)
{
	int temp[n];
	int i;

	for (i = 0; i < n; i++)
	{
		temp[n - 1 - i] = a[i];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
}
