////////types of files 
//////////1.text files  ex:.txt,.c
//////////2.binary files ex:.exe,.mp3
////////file pointer:file is a structure that needs fto be created for opening a file 
////////A file ptr that points to this structure and is used to akccess the file.
////////ex:*fptr;
//////-------------------------------------------------------------------------------------------------------
//////opening a file:
//////int main(){
//////FILE *fptr;
//////fptr=fopen("filename","mode");
//////closing a file:
//////fclose(fptr);
//////return 0;
//////}
//////----------------------------------------------------------------------------
//////file opening modes
//////r--open to read
//////rb--open to read in binary
//////w--open to write
//////wb--open to write in binary
//////a--open to append
//////------------------------------------------------------
//////file is exist before reading from it 
////int main(){
////	file *fptr;
////	fptr=fopen("new test.txt","w");
////	if(fptr==NULL){
////		printf("file does not exist\n");
////	}
////	else{
////		fclose(fptr);
////	}
////	return 0;
////}
//reading from a file---------------------------------------------------------------------------------------
//char ch;
//fscanf(fptr,"%c",&ch);
//printf("character=%c\n",ch);
//fclose(fptr);
//return 0;
//writing from a file ------------------------------------------------------
//FILE*fptr;
//fptr=fopen("test.txt","w");
//
//fprintf(fptr,"%c","m");
//fclose(fptr);
//return 0;
//reading and writing files--------------------------------------
//file*fptr;
//fptr=fopen("test.txt","r");
//printf("%c\n",fgetc(fptr));
//printf("%c\n",fgetc(fptr));
//printf("%c\n",fgetc(fptr));
//printf("%c\n",fgetc(fptr));
//fclose(fptr);
//return 0;
//-----------====----------------------------------------------------------------------------
//file *fptr;
//fptr=fopen("test.txt","w");
//fputc('m',fptr);
//fputc('m',fptr);
//fputc('m',fptr);
//-------------------------------------------------------------------------------------------------
//EOF(end of the file)
//fgetc return EOF to show that the file has ended

