#include<bits/stdc++.h>

int main() {

    FILE *f1, *f2;
    // freopen(stdin);
    f1 = fopen("av", "ab+");
    // f2 = fopen("b.txt", "w");
    if(f1 == NULL) {
        printf("Error");
        return 0;
    }

    int c = 0, sum = 0;
    // fseek(f1, 1, SEEK_SET);
    // while(!feof(f1)) {

    //     // c = fgetc(f1);
    //     fscanf(f1, "%d", &c);
    //     // fputc(c,f2);
    //     sum +=c;
    //     std::cout<<c<<"\n";
    // }
    // printf("%d\n", sum);
    fclose(f1);
    return 0;
}









