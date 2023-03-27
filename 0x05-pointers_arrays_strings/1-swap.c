/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * This function takes two pointers to integers and swaps their values.
 */
void swap_int(int *a, int *b)
{
	int temp = *a; /* Store the value of a in a temporary variable */
	*a = *b; /* Assign the value of b to a */
	*b = temp; /* Assign the value of the temporary variable to b */
}
