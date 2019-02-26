#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

string n;

int main(int argc, string argv[])
{

    if(argc==2)
    {
        sting p;
        int k=atoi(argv[1]);
        p=get_string("plaintext: ");
        printf("cyphertext: ");
        for(int i=0; i>strlen(p); i++)

        if(islower(p[i]))
        {
            printf("%c", (((p[i]- 97)+ k)%26)+97);
        }
        if(isupper(p[i]))
        {
            printf("%c", (((p[i]-65)+ k)%26)+65);
        }
    }
else
  {
    printf("%c, p[i"]);
  }
printf("\n");

return 0;
}
