#include <stdio.h>
typedef long long int lli;

int main()
{
    int t,c=1;

    scanf("%d", &t);
    while (t--)
    {
        char command[1000001];
        int memory[100]={0}, current = 0;
        scanf("%s", command);
        for (int i = 0; command[i] != '\0'; i++)
        {
            if (command[i] == '>')
            {
                current++;
                if (current == 100)
                {
                    current = 0;
                }
            }
            else if (command[i] == '<')
            {
                current--;
                if (current == -1)
                {
                    current = 99;
                }
            }
            else if (command[i] == '+')
            {
                memory[current]++;
                if (memory[current] == 256)
                {
                    memory[current] = 0;
                }
            }
            else if (command[i] == '-')
            {
                memory[current]--;
                if (memory[current] == -1)
                {
                    memory[current] = 255;
                }
            }
            else if (command[i] == '.')
            {
                continue;
            }
        }

        printf("Case %d:", c);
        c++;
        for (int i = 0; i < 100; i++)
        {
            printf(" %02X", memory[i]);
        }
        printf("\n");
    }

    return 0;
}