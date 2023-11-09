#include <stdio.h>
#include <unistd.h>

int main()

{

    int p[2];
    int r;
    char wm[2][20] = {"CGU0", "CSE"};
    char rm[20];
    r = pipe(p);
    if (r == -1)
    {
        printf("\n Unable to create pipe");
        return 1;
    }
    printf("Writing message = %s", wm[0]);
    write(p[1], wm[0], sizeof(wm[0]));
    read(p[0], rm, sizeof(rm));
    printf("Reading message = %s", rm);
    return 0;
}