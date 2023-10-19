/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
int temp;
int start = 0;
int end = n - 1;

/* Swap elements to reverse the array */
while (start < end)
{
/* Swap elements at the start and end positions */
temp = a[start];
a[start] = a[end];
a[end] = temp;

/* Move the start and end positions inward */
start++;
end--;
}
}
