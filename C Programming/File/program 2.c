//Decrypt file
#include<stdio.h>
int decrypt(char ch);
int main()
{
    FILE *file1, *file2;
    int j;
    char temp;
    //Creating a txt file named dec_msg.txt
    file2= fopen("dec_msg.txt","w");
    //Decryption starts
    if((file1= fopen("enc_msg.txt","r"))==NULL)
    {
        printf("File can not be opened!");
        exit(1);
    }
    //Reading the enc_msg.txt file if present
    printf("After decryption the massage is : ");
    while(1)
    {
        j = fgetc(file1);
        if(j==EOF)
        {
            break;
        }
        temp = decrypt(j);
        printf("%c",temp);
        fputc(temp, file2);
    }
    fclose(file1);
    printf("\n");
    return 0;
}
int decrypt(char j)
{
    char dec_data;
    int key = 4;
    if (j>=65 && j<=90)
    {
        if(j== 65 || j == 66 || j == 67 || j == 68)
            dec_data = j+22;
        else
            dec_data = (((j - 65) - key) % 26) +65;
    }
    else if (j>=97 && j<=122)
    {
        if(j==97 || j == 98 || j == 99 || j ==100)
            dec_data = j+22;
        else
            dec_data = (((j - 97) - key) % 26) +97;
    }
    else
        dec_data = j;
    return dec_data;
}
