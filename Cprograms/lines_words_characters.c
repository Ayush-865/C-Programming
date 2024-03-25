#include<stdio.h>
int  main()
{
int i,characters=0,words=0,lines=0;
char s[100];
printf("Enter the string element:");
scanf("%[^~]",&s);
for ( i = 0; i < s[i]!=0; i++)
{
    if (s[i]==' ')
    {
        words++;
    }
    if (s[i]=='\n')
    {
        lines++;
        words++;
    }
    if (s[i]!='\0' && s[i]!=' ')
    {
        characters++;
    }
}
printf("%d\n",characters);
printf("%d\n",words+1);
printf("%d\n",lines);
return 0;
}
