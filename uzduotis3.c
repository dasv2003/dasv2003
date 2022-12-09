#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFFER_SIZE 256

void get_max_word(char *line, char *max_word)
{
    int count = 0, max_length = 0,start = 0,length;
    length = strlen(line);
    int i;
    for( i = 0 ; i < length ; i++)
    {
        if((line[i] != ' ')  && (line[i] != '\n'))
        {
            count++;
        }
        else
        {
            if(count > max_length)
            {
                max_length = count;
                start = i-max_length;
            }
            count = 0;
        }
    }
    int j=0;
    for(i=start; i< start+max_length; i++)
    {
        max_word[j] = line[i];
        j++;
    }
    max_word[j] = '\0';
}
int main(int argc, char **argv)
{
    if (argc < 3)
    {
        printf("You should enter two filenames in the command line\n");
        return 1;
    }
    FILE *dataFile = fopen(argv[1], "r");
    if (!dataFile)
    {
        printf("Unable to open the file containing data\n");
        return 2;
    }
    FILE *resultFile = fopen(argv[2], "w");
    if (!resultFile)
    {
        printf("Unable to create the result file\n");
        fclose(dataFile);
        return 3;
    }
    char *line = NULL, *max_word;
    size_t len = BUFFER_SIZE;
    while(getline(&line, &len, dataFile) > 0)
    {
        if
        max_word=malloc(len*sizeof(char));
        get_max_word(line,max_word);
        fprintf(resultFile,"%s\n", max_word);
    }
    free(max_word);
    free(line);
    fclose(dataFile);
    fclose(resultFile);
    return 0;
}
/* pakeitimai - free, realloc, pakeistas pavadinimas i start, isimties isemimas*/


