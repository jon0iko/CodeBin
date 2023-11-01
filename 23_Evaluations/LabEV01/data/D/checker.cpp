#include<bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ACTUAL 0
#define WSIG 1
#define CSIG 2
ui64           judgeActualHash[] = {          10000000119ULL,          10000000123ULL,          10000000123ULL,  8857190282416483334ULL,   804661254680582061ULL, 12227484532522242575ULL,  7546966394431783022ULL, 12946184981451809289ULL,  8784333920842884376ULL, 13957634419409589589ULL};
ui64         judgeWSIgnoreHash[] = {                   49ULL,                   53ULL,                   53ULL, 12530975466712362816ULL,  4478446438976461543ULL, 15901269716818122057ULL,  8101783249662196964ULL, 16619970165747688771ULL, 12458119105138763858ULL, 17631419603705469071ULL};
ui64    judgeWS_CaseIgnoreHash[] = {                   49ULL,                   53ULL,                   53ULL, 12530975466712362816ULL,  4478446438976461543ULL, 15901269716818122057ULL,  8101783249662196964ULL, 16619970165747688771ULL, 12458119105138763858ULL, 17631419603705469071ULL};

bool isWS(char c){
    return c == ' ' || c == '\n' || c == '\r' || c == '\t';
}

ui64 findHash(char filename[], int flag = ACTUAL){
    FILE *fp = fopen(filename,"r");
    ui64 p = 1000000007;
    char c;
    ui64 hash = 0, coeff = 1;
    while((c = fgetc(fp))!=EOF){
        if(isWS(c) && (flag & WSIG))continue;
        if(isalpha(c) && (flag & CSIG)) c = tolower(c);
        hash += (c * coeff);
        coeff *= p;
    }
    fclose(fp);
    return hash;
}

void check(int cs){
    int i;
    ui64 scHash;
    for(i = 1; i <= cs; i++){
        char file[100],infile[100],stsfile[100];
        sprintf(file,"%d.out",i);
        sprintf(infile,"%d.in",i);
        sprintf(stsfile,"%d.status",i);
        printf("Case %d: ",i);
        FILE *fp;
        int flag = 0;
        if((fp = fopen(infile, "r")) == NULL) flag = 1;
        if(flag) printf("Input File Missing!!!\n");
        else{
            FILE *stsfp = fopen(stsfile, "r");
            char sts[100];
            fgets(sts, 100, stsfp);
            if(strncmp(sts, "TLE", 3) == 0) printf("Time Limit Exceeded\n");
            else if(strncmp(sts, "timeout", 7) == 0) printf("Run Time Error\n");
            else if(strncmp(sts, "+Accepted", 8) == 0) printf("*********************PASSED***********************\n");
            else {
                scHash = findHash(file);
                if(scHash == judgeActualHash[i-1])printf("*********************PASSED***********************\n");
                else{
                    scHash = findHash(file, WSIG);
                    if(scHash == judgeWSIgnoreHash[i-1])printf("White Space Error\n");
                    else{
                        scHash = findHash(file, WSIG | CSIG);
                        if(scHash == judgeWS_CaseIgnoreHash[i-1])printf("Upper/Lower Case Error\n");
                        else printf("Failed\n");
                    }
                }
            }
        }
    }
}
int main(){
	check(10);
	return 0;
}
