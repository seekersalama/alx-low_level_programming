/*
* Write a function that compares two strings.
*
* Prototype: int _strcmp(char *s1, char *s2);
* Your function should work exactly like strcmp
* FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.
*
* int string_compare(char str1[], char str2[])
*/
{
    int ctr=0;

    while(str1[ctr]==str2[ctr])
    {
        if(str1[ctr]=='\0'||str2[ctr]=='\0')
            break;
        ctr++;
    }
    if(str1[ctr]=='\0' && str2[ctr]=='\0')
        return 0;
    else
        return -1;
}
