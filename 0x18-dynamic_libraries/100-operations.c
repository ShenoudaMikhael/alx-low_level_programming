
/**
 * add - Function to add two numbers
 * @a: int
 * @b: int
 * Return: int
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Function to subtract two numbers
 * @a: int
 * @b: int
 * Return: int
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Function to multiply two numbers
 * @a: int
 * @b: int
 * Return: int
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Function to divide two numbers
 * Note: Ensure b is not zero to avoid division by zero
 * @a: int
 * @b: int
 * Return: int
 */
double div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return (0);
	}
}

/**
 * mod - Function to find the modulus of two numbers
 * Note: Ensure b is not zero to avoid division by zero
 * @a: int
 * @b: int
 * Return: int
 */
int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return (0);
	}
}
