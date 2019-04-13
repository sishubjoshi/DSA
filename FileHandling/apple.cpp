#include<bits/stdc++.h>

int main() {

    FILE *f1, *f2;
    
    f1 = fopen("a.txt", "r");
    f2 = fopen("b.txt", "w");
    if(f1 == NULL) {
        printf("Error");
        return 0;
    }

    int c = 0;
    while(c != -1) {

        c = fgetc(f1);
        // fscanf(f1, "%d", &x);
        fputc(c,f2);
    }

    fclose(f1); fclose(f2);

    return 0;

    
}