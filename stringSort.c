#include <stdio.h>
// #include <string.h>

void lower(char a[])
{

   for (int i = 0; a[i] != '\0'; i++)
   {
      if (a[i] >= 'A' && a[i] <= 'Z')
      {
         a[i] += 'a' - 'A';
      }
   }
}

int strcmp(char a[], char b[])
{
   int i = 0;
   lower(a);
   lower(b);
   while (a[i] == b[i])
   {
      if (a[i] == '\0')
      {
         return 0;
      }
      i++;
   }

   return (a[i] > b[i]) ? 1 : -1;
}

void strcopy(char a[], char b[])
{
   int i = 0;
   for (i = 0; b[i] != '\0'; i++)
   {
      a[i] = b[i];
   }
   a[i] = '\0';
}

int main()
{
   int n;
   scanf("%d", &n);
   char str[n][50], temp[50];
   printf("Enter n and words: ");

   // Getting strings input
   for (int i = 0; i < n; ++i)
   {
      scanf("%s", str[i]);
   }

   // storing strings in the lexicographical order
   for (int i = 0; i < n; ++i)
   {
      for (int j = i + 1; j < n; ++j)
      {

         // swapping strings if they are not in the lexicographical order
         if (strcmp(str[i], str[j]) > 0)
         {
            strcopy(temp, str[i]);
            strcopy(str[i], str[j]);
            strcopy(str[j], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < n; ++i)
   {
      printf("%s\n", str[i]);
   }
   return 0;
}