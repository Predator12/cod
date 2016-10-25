#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
   if (argc != 2) 
   {
       printf("Type  key.");
       return 1;
}


   string k = argv[1];
   int cn = strlen(k);
   for(int m = 0; m < cn; m++) 
   {
       if (!isalpha(k[m])) {
           printf("Your symbols are non-alphabetical.");
           return 1;
}
}


   string ftxt = GetString();
   if(ftxt == NULL) {
       printf("Your text has a very big length.");
       return 1;
}


   for (int i = 0, n = 0; i < strlen(ftxt); i++) 
   {


       if (isalpha(ftxt[i])) 
       {
            if (islower(ftxt[i]))
               printf("%c", ((((ftxt[i] - 'a') + ((tolower(k[n++%cn]))-'a')%26) % 26) + 'a'));


           if (isupper(ftxt[i]))
               printf("%c", ((((ftxt[i] - 'A') + ((toupper(k[n++%cn]))-'A')%26) % 26) + 'A'));
} else
           printf("%c", ftxt[i]);
}


   printf("\n");
   return 0;}
