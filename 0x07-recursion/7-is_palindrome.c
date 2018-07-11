#include "holberton.h"
/**
 * is_palindrome - determine a string is a palindrome or not
 * @s: the string need to check
 * Return: return 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	return (help1(0, len - 1, len, s));
}
/**
 * help1 - help function for is_palindrome
 * @head: the head of a string
 * @tail: the tail of a string
 * @len: the length of a string
 * @s: the string need to check
 * Return: return 1 if a string is a palindrome and 0 if not
 */
int help1(int head, int tail, int len, char *s)
{
	if (len == 0)
		return (1);
	if (head <= len / 2)
	{
		if (*(s + head) != *(s + tail))
			return (0);
		else
			return (help1(head + 1, tail - 1, len, s));
	}
	return (1);
}
/**
 * _strlen_recursion - return the length of a string
 * @s: the string that need to check
 * Return: return the length
 */
int _strlen_recursion(char *s)
{

	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
