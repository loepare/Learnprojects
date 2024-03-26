#include <cs50.h>
#include <stdio.h>
#include <string.h>

string encrypt(string key, string plain, int plainlengthencr);
int alphnr(char letter);

int main(int gavc, string argv[])
{
    char key[26] = {};

    for (int j = 0; j < 26; j++)
    {
        key[j] = argv[1][j];
    }

    printf("Key: ");
    for (int i = 0; i < 26; i++)
    {
        printf("%c", key[i]);
    }

    printf("\n");

    string plain = get_string("Plain text: ");
    int plainlength = strlen(plain);

    string encryptext = encrypt(key, plain, plainlength);
    printf("%s\n", encryptext);
    return 0;

}

string encrypt(string keyencr, string plainencr, int plainlengthencr)
{
    for (int r = 0; r < plainlengthencr; r++)
    {
        int t = alphnr(plainencr[r]);
        plainencr[r] = keyencr[t];
    }
    return plainencr;
}

int alphnr(char l)
{
    int position = l - 65;
    return position;
}
