#include <stdio.h>

int main(void)
{
    FILE *fp;
    char quote[100], ch;
    fp = fopen("quotes.txt", "w");
    printf("Type a quote: ");
    while((ch=getchar()) != EOF)
    {
        putc(ch, fp);
    }
    fclose(fp);
    printf("File created!\n");
    return 0;
}