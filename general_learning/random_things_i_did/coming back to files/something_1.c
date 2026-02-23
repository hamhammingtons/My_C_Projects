#include <stdlib.h>
#include <stdio.h>
int main()
{
    FILE *file_obj = fopen("hello.txt", "wb");
    if (file_obj == NULL)
    {
        return 1;
    }
    fprintf(file_obj, "hello sir\n hellosir\n");
    fputs("Hello_NEW\n", file_obj);

    int sum[] = {1, 2, 3, 4};
    size_t fat = fwrite(&sum, sizeof(sum), 1, file_obj);
    if (!fat)
    {
        printf("bad");
        return 1;
    }
    fclose(file_obj);

    file_obj = fopen("hello.txt", "rb");

    int new_sum[4];
    fread(new_sum, sizeof(new_sum), 1, file_obj);

    printf("Array read back: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", new_sum[i]);
    }

    fclose(file_obj);
    return 0;
}