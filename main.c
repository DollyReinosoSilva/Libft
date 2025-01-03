#include <stdio.h>
int main()
{
    size_t	ft_strlcat(char *dst, const char *src, size_t size);
    char dst[20] = "segundo";
    const char *src = "primero";
    size_t log = ft_strlcat(dst, src, sizeof(dst));
    printf("%s", dst);
    printf("%zu", log);

}

