#include<bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ACTUAL 0
#define WSIG 1
#define CSIG 2
ui64           judgeActualHash[] = {    45733728024125210ULL,  1082783833965736323ULL,  6949114754096160617ULL,  7283758887073643098ULL, 15354535088445752844ULL, 14009161845744346778ULL,  2659428791531121088ULL, 10343796540080715672ULL,  5612605335491629803ULL,  6733307932781070815ULL};
ui64         judgeWSIgnoreHash[] = { 13073261469929851624ULL,  6014653450208539863ULL,  3057619962766030401ULL,  6625383585320720612ULL, 16817112432148676998ULL, 12693219818268940588ULL, 17257619556551732416ULL, 14957683697438350070ULL,  8217651035340079817ULL, 11490201373267779023ULL};
ui64    judgeWS_CaseIgnoreHash[] = { 13073261469929851624ULL,  6014653450208539863ULL,  3057619962766030401ULL,  6625383585320720612ULL, 16817112432148676998ULL, 12693219818268940588ULL, 17257619556551732416ULL, 14957683697438350070ULL,  8217651035340079817ULL, 11490201373267779023ULL};

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
