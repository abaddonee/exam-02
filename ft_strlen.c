#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (ft_strchr(accept, s[i]) == 0) // si le caractère n'est pas trouvé dans accept
			break;
		++i;
	}
	return (i);
}


 int main()
 {
    char *s = "Hello World";
    char *charset = "Hello";
    printf("%ld\n", ft_strspn(s, charset));
    printf("%ld\n", strspn(s, charset));
    return 0;
 }


