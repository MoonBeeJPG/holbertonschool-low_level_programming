#include "main.h"
/**
* _isalpha - hihi
* @c: hehe
* Return: 1 if is a letter, 0 if is otherwise
*/
int _isalpha(int c)
{
	if (c >= "[a-A]" && c <= "[z-Z]")
		return (1);
		else
			return (0);
}
