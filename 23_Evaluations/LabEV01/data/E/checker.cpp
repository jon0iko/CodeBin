#include<bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ACTUAL 0
#define WSIG 1
#define CSIG 2
ui64           judgeActualHash[] = {  6799985337239293043ULL, 16270978933412194382ULL, 10217316992379861038ULL, 13612421385878861927ULL, 18103261771411404702ULL,  1037830053925597409ULL, 14575717645274022908ULL,  8878330593021963299ULL, 16601161189097048219ULL, 15486008495976754899ULL};
ui64         judgeWSIgnoreHash[] = { 17752340464144050141ULL,  1862178726631373062ULL, 16096342561031330100ULL,  4364203211008673177ULL,  4324798475310590892ULL,  6324977454272343869ULL,  5369935965309906404ULL, 16487356576887990903ULL,  3823391941579413269ULL,  8950210626100645801ULL};
ui64    judgeWS_CaseIgnoreHash[] = { 17752340464144050141ULL,  1862178726631373062ULL, 16096342561031330100ULL,  4364203211008673177ULL,  4324798475310590892ULL,  6324977454272343869ULL,  5369935965309906404ULL, 16487356576887990903ULL,  3823391941579413269ULL,  8950210626100645801ULL};

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
