#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

struct filecontent
{
    char **file;
    long long unsigned lengthfile, maxlengthfile;
	size_t *stringlength;
};


struct filecontent readfile(const char *files);
void swap();
void swapchar();
void bubbleSort(struct filecontent *file);


int main(int argc, char **argv)
{
	struct filecontent file;
	if(argc == 1)
	{
		file = readfile("8.4.2.txt");
	}
	else
	{
		file = readfile(argv[1]);
	}

	bubbleSort(&file);

	for(size_t i = 0; i < file.lengthfile; i++)
	{
		//printf("%llu", file.stringlength[i]);
		printf("%s\n", *(file.file + i));
		
	}

	return 0;
}

struct filecontent readfile(const char *files)
{	
	FILE *file_ptr;
	char str[4096+2] = "0";
	long long unsigned i = 0;
	char ch;
	struct filecontent read;
	read.lengthfile = 0;
	read.maxlengthfile = 1;

	file_ptr = fopen(files, "r");
	assert(!(file_ptr == NULL));

	while((ch = fgets(str, (4095+2), file_ptr) != NULL))
	{
		read.lengthfile++;
		read.maxlengthfile = __max(read.maxlengthfile, strlen(str));
		assert(read.maxlengthfile + 1 <= 4096);
	}
	rewind(file_ptr);
	const long long unsigned size = read.lengthfile*sizeof(char*);
	char **output = calloc(read.lengthfile + 1, sizeof(char*));
	read.stringlength = calloc(read.lengthfile, sizeof(size_t));
	assert(output != NULL);
	for(i = 0; i < read.lengthfile; i++)
	{
		output[i] = (char*)calloc((read.maxlengthfile + 2), sizeof(char));
		assert(output[i] != NULL);
	}

	i = 0;
	while(fgets(str, 4095, file_ptr) != NULL)
	{
		//strcpy(str, searchAndReplace(str, "\n", ""));
		strcpy(output[i], str);
		read.stringlength[i] = strlen(str);
		i++;
	}
	fclose(file_ptr);
	read.file = output;
	return read;
}

void bubbleSort(struct filecontent *file)
{
    int i, j;
    bool swapped;
    for (i = 0; i < (*file).lengthfile - 1; i++) {
        swapped = false;
        for (j = 0; j < (*file).lengthfile - i - 1; j++) {
            if ((*file).stringlength[j] > (*file).stringlength[j + 1]) {
                swap(&(*file).stringlength[j], &(*file).stringlength[j + 1]);
				swapchar(&file->file[j], &file->file[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}

void swap(size_t *xp, size_t *yp){
    size_t temp = *xp;
    *xp = *yp;
    *yp = temp;
}


void swapchar(char **xp, char **yp)
{
	char *tmp = *xp;
	*xp = *yp;
    *yp = tmp;
}