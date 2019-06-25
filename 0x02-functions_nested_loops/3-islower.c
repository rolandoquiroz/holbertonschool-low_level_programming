/**
 * _islower - function that checks for lowercase character
 * @c:  int c
 *
 * Return: An int.
 */
int _islower(int c)
{
int my_answer;
if ((c > 96) && (c < 123))
my_answer = 1;
else
my_answer = 0;
return (my_answer);
}
