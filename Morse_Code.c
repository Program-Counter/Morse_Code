///MORSE CODE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//FUNCTIONS
void coding(char test[]);

int main(void)
{
    char text[100];

    //Text input to encode
    printf("Text: ");
    scanf("%[^\n]", text);

    coding(text);
    return 0;
}

//CODING
void coding(char test[])
{
    //Memory location of the encoded string
    char c_s[10000]= "";

    //Each character of the array will be encoded
    for(unsigned int i=0; test[i] != '\0'; i++){
        test[i] = (char)tolower(test[i]);
        switch(test[i]){
        case 'a':
            strcat(c_s, ".-");
            break;
        case 'b':
            strcat(c_s, "-...");
            break;
        case 'c':
            strcat(c_s, "-.-.");
            break;
        case 'd':
            strcat(c_s, "-..");
            break;
        case 'e':
            strcat(c_s, ".");
            break;
        case 'f':
            strcat(c_s, "..-.");
            break;
        case 'g':
            strcat(c_s, "--.");
            break;
        case 'h':
            strcat(c_s, "....");
            break;
        case 'i':
            strcat(c_s, "..");
            break;
        case 'j':
            strcat(c_s, ".---");
            break;
        case 'k':
            strcat(c_s, "-.-");
            break;
        case 'l':
            strcat(c_s, ".-..");
            break;
        case 'm':
            strcat(c_s, "--");
            break;
        case 'n':
            strcat(c_s, "-.");
            break;
        case 'o':
            strcat(c_s, "---");
            break;
        case 'p':
            strcat(c_s, ".--.");
            break;
        case 'q':
            strcat(c_s, "--.-");
            break;
        case 'r':
            strcat(c_s, ".-");
            break;
        case 's':
            strcat(c_s, "...");
            break;
        case 't':
            strcat(c_s, "-");
            break;
        case 'u':
            strcat(c_s, "..-");
            break;
        case 'v':
            strcat(c_s, "...-");
            break;
        case 'w':
            strcat(c_s, ".--");
            break;
        case 'x':
            strcat(c_s, "-..-");
            break;
        case 'y':
            strcat(c_s, "-.--");
            break;
        case 'z':
            strcat(c_s, "--..");
            break;
        case '1':
            strcat(c_s, ".----");
            break;
        case '2':
            strcat(c_s, "..---");
            break;
        case '3':
            strcat(c_s, "...--");
            break;
        case '4':
            strcat(c_s, "....-");
            break;
        case '5':
            strcat(c_s, ".....");
            break;
        case '6':
            strcat(c_s, "-....");
            break;
        case '7':
            strcat(c_s, "--...");
            break;
        case '8':
            strcat(c_s, "---..");
            break;
        case '9':
            strcat(c_s, "----.");
            break;
        case '0':
            strcat(c_s, "-----");
            break;
        case '?':
            strcat(c_s, "..--..");
            break;
        case '!':
            strcat(c_s, "-.-.--");
            break;
        case '.':
            strcat(c_s, ".-.-.-");
            break;
        case ',':
            strcat(c_s, "--..--");
            break;
        }
        strcat(c_s, " ");
    }
    printf("\n\nCODING:\n");
    printf("%s", c_s);
}
