//Encrypt file
#include<stdio.h>
int encrypt(char x);
int main()
{
    char msg[100] = "Good morning";
    char *pt, temp;
    FILE *f1, *f2;
    int i;
    f2 = fopen("enc_msg.txt","w");
    //opening input.txt
    if((f1 = fopen("input.txt","w"))==EOF)
    {
        printf("This file can not be opened!");
        exit(1);
    }
    //Write the massage to input.txt file
    pt = msg;
    while(*pt)
    {
        if(fputc(*pt, f1)==EOF)
        {
            printf("File writing Error!\n");
            exit(1);
        }
        pt++;
    }
    fclose(f1);
    //Read the input.txt file and take input
    if((f1= fopen("input.txt","r"))==NULL)
    {
        printf("File can not be opened!");
        exit(1);
    }
    //Reading the input.txt file and encrypting it's each characters
    printf("After encrypted the massage is : ");
    while(1)
    {
        i = fgetc(f1);
        if(i==EOF)
        {
            break;
        }
        temp = encrypt(i);
        printf("%c",temp);
        fputc(temp, f2);
    }
    fclose(f1);
    printf("\n");
    return 0;
}
int encrypt(char j)
{
    char enc_data;
    int key = 4;
    if (j>=65 && j<=90)
    {
        enc_data = (((j - 65) + key) % 26) +65;
    }
    else if (j>=97 && j<=122)
    {
        enc_data = (((j - 97) + key) % 26) + 97;
    }
    else
        enc_data = j;
    return enc_data;
}
