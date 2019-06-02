//《现代方法》P221,13
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 100

void build_index_url(const char *domain, char *index_url);

int main()
{
    char index_url[M];
    build_index_url("knking.com", index_url);
    printf("%s\n", index_url);
    system("pause");
    return 0;
}

void build_index_url(const char *domain, char *index_url)
{
    strcpy(index_url, "http://www.");
    strcat(index_url, domain);
    strcat(index_url, "/index.html");
}