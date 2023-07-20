/*
 *main - entry point
 *Description: checking if a charater a digit or no
 *Return: 1 if a digit and 0 otherwise
**/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
