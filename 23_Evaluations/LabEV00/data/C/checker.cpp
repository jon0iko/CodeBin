#include<bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ACTUAL 0
#define WSIG 1
#define CSIG 2
ui64           judgeActualHash[] = { 11508403609697754899ULL, 18411375787093384746ULL, 17009300404435371120ULL, 14975186957867263267ULL, 16572230633604353225ULL, 17000087303712590526ULL, 15395471040146975835ULL,   386584151437832710ULL, 18355603365100559154ULL,  9055478578425352151ULL};
ui64         judgeWSIgnoreHash[] = { 15182188793993634381ULL,  3638416897679712612ULL,  2236341515021698986ULL,   202228068453591133ULL,  1799271744190681091ULL,  7403597657321808088ULL,  2427901532554757873ULL,  9236838578756601888ULL,  3890329809804458472ULL, 17905733005744121329ULL};
ui64    judgeWS_CaseIgnoreHash[] = { 15182188793993634381ULL,  3638416897679712612ULL,  2236341515021698986ULL,   202228068453591133ULL,  1799271744190681091ULL,  7403597657321808088ULL,  2427901532554757873ULL,  9236838578756601888ULL,  3890329809804458472ULL, 17905733005744121329ULL};

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
