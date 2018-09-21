#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
returns the amount of digits in width, and hight; in the widthDigitsPtr, and heightDigitsPtr respectively.
**/
void amountOfNumbers(int width, int height, int *widthDigitsPtr, int *heightDigitsPtr){
int amountWidth = width;
int amountHeight = height;
int tracker = 0;
//checks amount of digits in  width 
while(amountWidth >0){
	amountWidth = amountWidth/ 10; //reduces by one digit
	tracker ++;
}
*widthDigitsPtr = tracker; 
tracker = 0; //reset tracker
//checks amount of digits in height
while(amountHeight >0){
	amountHeight = amountHeight/ 10 ;//reduces by one digit
	tracker ++;
}
*heightDigitsPtr = tracker;
}

/**
const char *magicNumber: takes in an array of characters
this method tests to see if a file is a PPM file, by checking the first line of the file
and making sure it has P6; exits program when file is not a PPM.
*/
void checkMagicNumber(const char *magicNumber){
const char identifierNumber [3] = {'P','6','\0'}; 
//function returns 0 if equal Strings and 1 if not equal; compares 3 characters
if(strncmp(magicNumber, identifierNumber, 3) == 0){
//not equal, since 0 in c is false
printf("file is a PPM \n");
}else{
//when the strings are not equal
printf("file is not a ppm exiting program \n");
exit(EXIT_FAILURE); //quits program
}
}
/**
obtains the width, and height of the object, form the header. checks to see if it has the 
correct magic number for a ppm file. Also, saves the ppm file in an array.
**/
 unsigned char  *readPPM(int *width, int *height, int *widthDigitsPtr, int *heightDigitsPtr, int *sizePtr){
//read image
char magicNumber[3];
//reads the ppm file for the magic number, height, and width; then stores it
FILE *fp = fopen("test.ppm", "r");
fscanf(fp, "%s%d%d",magicNumber, width, height);

checkMagicNumber(magicNumber); //verrify this is a ppm file
amountOfNumbers(*width, *height, widthDigitsPtr,  heightDigitsPtr); //calculates the amount of digits 
printf("width digits %d height digits %d\n", *widthDigitsPtr, *heightDigitsPtr);
fclose(fp);


//reading binary data from ppm file
fp = fopen("test.ppm", "rb");

/**
since we checked that P6 exists, we can say there are 3 characters, including the \n        
we can find the amount of characters in the next line in the header by seeing the amount of characters 
in the width and height, we also know there is a space between thsoe two digits and \n 
if we can assume that the last feild in the header will always be 255, then we know that the characters 
in the last line including the \n will be 4
to sum it all up; [3]+
(height) + 1(space) + (width) + 1(new line) +
4
in this pictures case: 3+3+1+3+1+4 = 15 
the value 9 is the "default characters" which is basicly P6, and 255 with 2 new lines 
also the space between height and width, and the \n for that line in hte header
**/

*sizePtr = (*width * *height *3) + *widthDigitsPtr + *heightDigitsPtr + 9;

printf("size is %d\n", *sizePtr);

//array of the contents that hold all the data from original ppm
unsigned char *picture = new   unsigned char [*sizePtr];
fread(picture, sizeof(char), *sizePtr, fp);
fclose(fp);
return picture;
}
/**
copies the ppm file and creates another image called copiedPicture
**/
void writePPM(unsigned char *picture, int *sizePtr) {
FILE *fp = fopen("copiedPicture", "wb");
fwrite(picture, sizeof(char), *sizePtr, fp);
}
int main (int argc, char** argv){
	int width = 0;
	int height = 0;
	int widthDigits = 0; //how many digits are in width
	int heightDigits = 0; //how many digits are in height
	int size = 0;
	int *widthDigitsPtr = &widthDigits;
	int *heightDigitsPtr = &heightDigits;
	int *sizePtr = &size;
	int *widthPtr = & width;
	int *heightPtr = &height;
	unsigned char *picturePtr = readPPM(widthPtr, heightPtr, widthDigitsPtr, heightDigitsPtr, sizePtr);
	
	printf("width %d height %d\n", width, height);
	
	writePPM(picturePtr, sizePtr) ;
	delete []picturePtr;
	picturePtr = NULL;
}