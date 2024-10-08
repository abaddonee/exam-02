#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        int i = 0;
        int end = 0;
        int start = 0;
       
        while(argv[1][i] != '\0')
            i++;
        while(i >= 0)
        {
           
            
            while(argv[1][i] == '\t' || argv[1][i] == ' ' || argv[1][i] == '\0')
            {
                write(1, &argv[1][i], 1);
                i--;
            }
            end = i;
            while(argv[1][i] != '\t' && argv[1][i] != ' ' && argv[1][i] != '\0')
                i--;
            start = i + 1;
            
            while(start <= end)
            {
                write(1, &argv[1][start], 1);
                start++;
            }
            if(i > 0)
                write(1, " ", 1);
            
            

        }
            
    }
    write(1, "\n", 1);
    return 0;
}