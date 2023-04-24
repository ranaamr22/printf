int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
{
	int n;

	n = write(1, va_arg(types, char), 1);
	write (buffer, n);
}
