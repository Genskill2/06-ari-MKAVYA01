 #include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
#include<string.h>
#include<cs50.h>

string ari(string str)
{
    int i,c=0,w=0,sen=0;

    int index = 0;
    int length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(isalnum(str[i]))
        {
          c++;
        }
        else if(isspace(str[i]))
        { 
          w++;
        }
        else if(str[i] == '.' || str[i] == '!' || str[i] == '?')
        { 
          sen++;
        }
    }

    index = (ceil)((4.71 * c/w) + (0.5 * w/sen) - 21.43);

    switch(index)
    {
        case 1 : 
        {
            return "Kindergarten";
            break;
        }

        case 2 : 
        {
            return "First/Second Grade";
            break;
        }

        case 3 : 
        {
            return "Third Grade";
            break;
        }

        case 4 : 
        {
            return "Fourth Grade";
            break;
        }

        case 5 : 
        {
            return "Fifth Grade";
            break;
        }

        case 6 : 
        {
            return "Sixth Grade";
            break;
        }

        case 7 : 
        {
            return "Seventh Grade";
            break;
        }

        case 8 : 
        {
            return "Eighth Grade";
            break;
        }

        case 9 : 
        {
            return "Ninth Grade";
            break;
        }

        case 10 : 
        {
            return "Tenth Grade";
            break;
        }

        case 11 : 
        {
            return "Eleventh Grade";
            break;
        }

        case 12 : 
        {
            return "Twelfth grade";
            break;
        }

        case 13 : 
        {
            return "College student";
            break;
        }

        case 14 : 
        {
            return "Professor";
            break;
        }
    }

    return NULL;
}
