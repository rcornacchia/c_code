#include <stdio.h>

void print_n_spaces(int n) 
{
        int i;
        for (i = 0; i < n; i++)
        {
            printf(" ");
        }
}

void g(int x)
{
        print_n_spaces(x);
        printf("%c\n", 'o');
        if(x == 0)
                return;
        else
                g(x-1);
        print_n_spaces(x);
        printf("%c\n", 'o');        
}

int main()
{
        g(5);
        return 0;
}
