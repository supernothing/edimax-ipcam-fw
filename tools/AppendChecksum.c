#include <stdio.h>

int main(int argc, char **args)
{
	FILE *f = NULL;
	unsigned char c = 0, checksum = 0;
	int count = 0;

	if (argc != 2) {
		printf("Parameters error!\n");
		return -1;
	}

	f = fopen (args[1], "r+");
	if (f == NULL) {
		printf("Failed to open file: %s !\n", args[1]);
		return -1;
	}
	fseek(f, 8, SEEK_SET); //skip 8 bytes header

	while (fread(&c, 1, 1, f) == 1) {
		checksum ^= c;
		count++;
	}

	printf("checksum:0x%x\n", checksum);
	printf("file size:%d\n", count);
	
	//write checksum to tail of file
	fseek(f, 0, SEEK_END);
	fwrite(&checksum, 1, 1, f);
	fclose(f);

	return 0;
}

