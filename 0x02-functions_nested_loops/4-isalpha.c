#include "main.h"

/**
 * _isalpha - checks character
 * @i: - the character
 * Return: 1 for all
 */
int _isalpha(int i)
{
if ((i >= 65 && i <= 90) || (i >= 97 && i <= 122))
{
return (1);
}
return (0);
}
