int solutions(int a, int b, int c)
{
	int d = b * b - 4 * a * c;
	return d ? d > 0 ? 2 : 0 : 1;
}
