#include <stdio.h>
#include <math.h>
#include <string.h>

char id[] = "p06599075258";
int checksum1, checksum2;

int callcchecksum();
int calchecksumgetal();
long long int calchecksumstr();
int controleerNedEuroID();

int main(void) {
    int res = controleerNedEuroID(id);
    //printf("%c", id[0]);
    //printf("%d\n", res);
    if (res == 1) {
        printf("dit biljet is geldig");
    }
    else {
        printf("dit biljet is ongeldig");
    }
}

int calcchecksum() {
    checksum1 = id[1] - '0' + id[2] - '0' + id[3] - '0' + id[4] - '0' + id[5] - '0' + id[6] - '0' + id[7] - '0' + id[8] - '0' + id[9] - '0' + id[10] - '0' + id[11] - '0';
    return checksum1;
}

int calchecksumgetal(long long int getal){
    int t, ant = 0;
    while (getal != 0){
        t = getal % 10;
        getal = (getal - t) / 10;
        ant = ant + t;
    } 
    if(ant > 9){
        ant = calchecksumgetal(ant);
    }
    return ant;
}

long long int calchecksumstr(char getal[]){
    int i;
    long long int check = 0;
    int len = strlen(getal);
    int getal2;

    for (i = 0; i < len; i++) {
        if(getal[i] >= '0' && getal[i] <= '9'){
            check = 10 * check + (getal[i] - '0');
        }
    }
        return calchecksumgetal(check);
}

int controleerNedEuroID(char idf[]) {
    //printf("%s", id);
    if (idf[0] == 'p') {
        //return 1;
        calcchecksum(idf);
        printf("%d\n", checksum1);
        printf("%d\n", calchecksumstr(idf));
        return calchecksumstr(idf);
    }
    else {
        return 0;
    }
}

