#include<bits/stdc++.h>
using namespace std;
#define ui64 unsigned long long
#define ACTUAL 0
#define WSIG 1
#define CSIG 2
ui64           judgeActualHash[] = {  5854641206309580824ULL, 11554146781793008344ULL,  6796480968411994090ULL, 14380470655521849222ULL, 11282601032813683664ULL,  4733319142621745834ULL,  3549059576806643208ULL, 15667829190078783466ULL,  2513732051767922579ULL, 15510070370950181257ULL};
ui64         judgeWSIgnoreHash[] = { 15181390106127916314ULL,  5850687226919077288ULL, 12109644476950821180ULL,  4128151519988976664ULL, 10017097361246284512ULL, 18054797441370559608ULL, 12607334631129208622ULL,  5762597217733621918ULL, 13411875381491585447ULL,   969089872104536115ULL};
ui64    judgeWS_CaseIgnoreHash[] = { 17141132357960754170ULL,  7810429478751915144ULL, 14069386728783659036ULL,  6087893771821814520ULL, 11976839613079122368ULL, 11520649813482924504ULL,  6073187003241573518ULL, 13147224727153816446ULL,  2349758817202228359ULL,  8353717381524730643ULL};

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
