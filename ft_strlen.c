#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>



 size_t strcspn(const char *s, const char *charset)
 {
    size_t i = 0;
    size_t j = 0;
    if (s == NULL || charset == NULL) // si s ou charset est NULL
        return 0;
    while (s[i] != '\0') // tant que s[i] n'est pas égale à '\0'
    {
        j = 0; // on remet j à 0
        while (charset[j] != '\0') // tant que charset[j] n'est pas égale à '\0'
        {
            if (s[i] == charset[j]) // si s[i] est égale à charset[j]
                return i; // on retourne i qui est la position de la lettre dans s
            j++; // on incrémente j pour passer à la prochaine lettre de charset
        }
        i++; // on incrémente i pour passer à la prochaine lettre de s
    }
    return i;
 }

 int main()
 {
    char *s = "Hello World";
    char *charset = "W";
    printf("%ld\n", strcspn(s, charset));
    return 0;
 }


