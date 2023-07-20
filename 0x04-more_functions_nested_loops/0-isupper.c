/*
 * main - entry point
 * Description: checking if a character is upper or lower case
 * Return : 0 lowercase if 1 if uppercase
 **/
int _isupper(int c)
	{
	if (c >= 65 && c <= 90)
		return (1);
	else 
		return (0);
	}
