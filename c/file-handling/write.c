#include <stdio.h>

int main(void)
{
    FILE *fp;
    char quote[100], c;
    fp = fopen("quotes.txt", "w");
    printf("Type a quote: ");
    while((c=getchar()) != EOF)
    {
        putc(c, fp);
    }
    fclose(fp);
    printf("File created");
    return 0;
}