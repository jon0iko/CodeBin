#include<bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ACTUAL 0
#define WSIG 1
#define CSIG 2
ui64           judgeActualHash[] = {  5389640701351147443ULL,  3517562042838661711ULL, 16830992895191855316ULL,  8140539546946607341ULL, 12495410923324128717ULL,  4124371923785690813ULL, 12712411349885832398ULL,  5500014653929883897ULL, 13941346248380032914ULL,   487913979223192023ULL};
ui64         judgeWSIgnoreHash[] = {  1877572901340262079ULL, 15966536958717735549ULL, 16879931575341207084ULL, 11860063118157444669ULL,  1719243923240671621ULL, 14295705844827028309ULL,  5149693417652493396ULL, 13426782171386842573ULL,  1357785533109188844ULL,   153634862608727701ULL};
ui64    judgeWS_CaseIgnoreHash[] = { 11191845781298495679ULL, 12706584271416109821ULL, 16893800866771631116ULL,  1781913470959351229ULL, 16365841180342754437ULL,  6004398550283097717ULL, 15189936542259162196ULL, 11931958136000087917ULL, 10984202045443880876ULL, 16279704344062686645ULL};

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
