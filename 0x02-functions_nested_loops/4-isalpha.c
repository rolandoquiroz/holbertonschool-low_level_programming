/**
* _isalpha - checks for alphabetic character
* @c: Description of parameter x
*
* Return: An int
*/
int _isalpha(int c)
{
int my_answer;
if (((c > 96) && (c < 123)) || ((c > 64) && (c < 91)))
{
my_answer = 1;
}
else
{
my_answer = 0;
}
return (my_answer);
}
