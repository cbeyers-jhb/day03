void ft_putchar(char c);

void ft_putstr(char *str)
{
    if (str)
    {
        while (*str != '\0')
        {
            ft_putchar(*str);
            ++str;
        }
    }
}

int main(void)
{
    char *s1;

	s1 = "hello";
	ft_putchar(s1);
	return 0;
}

