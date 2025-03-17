#include <stdio.h>
#include <stdlib.h>

void win() {
    system("cat flag.txt");
}

int main(int argc, char const *argv[]) {
    setvbuf(stdout, NULL, _IONBF, 0);
    char name[10] = "AAAAAAAAB";
    int select;

    printf("Where: ");
    if (scanf("%d", &select) != 1) exit(1);

    while(select >= 0){
        printf("Here is your input %d\n", name[select]);
        printf("Where: ");
        if (scanf("%d", &select) != 1) exit(1);
    }
    
    getchar();
    printf("Change data: ");
    gets(name);
    puts(name);
    return 0;
}
