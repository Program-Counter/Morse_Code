///CODICE MORSE

//FUNZIONI
void codifica(char t[]);

int main(void)
{
    char testo[100];

    //Input testo da codificare
    printf("Testo: ");
    scanf("%[^\n]", testo);

    codifica(testo);
    return 0;
}

//CODIFICA
void codifica(char test[])
{
    //Stringa codificata
    char s_c[10000]= "";

    //Ogni carattere dell' array verrà codificato
    for(unsigned int i=0; test[i] != '\0'; i++){
        test[i] = (char)tolower(test[i]);
        switch(test[i]){
        case 'a':
            strcat(s_c, ".-");
            break;
        case 'b':
            strcat(s_c, "-...");
            break;
        case 'c':
            strcat(s_c, "-.-.");
            break;
        case 'd':
            strcat(s_c, "-..");
            break;
        case 'e':
            strcat(s_c, ".");
            break;
        case 'f':
            strcat(s_c, "..-.");
            break;
        case 'g':
            strcat(s_c, "--.");
            break;
        case 'h':
            strcat(s_c, "....");
            break;
        case 'i':
            strcat(s_c, "..");
            break;
        case 'j':
            strcat(s_c, ".---");
            break;
        case 'k':
            strcat(s_c, "-.-");
            break;
        case 'l':
            strcat(s_c, ".-..");
            break;
        case 'm':
            strcat(s_c, "--");
            break;
        case 'n':
            strcat(s_c, "-.");
            break;
        case 'o':
            strcat(s_c, "---");
            break;
        case 'p':
            strcat(s_c, ".--.");
            break;
        case 'q':
            strcat(s_c, "--.-");
            break;
        case 'r':
            strcat(s_c, ".-");
            break;
        case 's':
            strcat(s_c, "...");
            break;
        case 't':
            strcat(s_c, "-");
            break;
        case 'u':
            strcat(s_c, "..-");
            break;
        case 'v':
            strcat(s_c, "...-");
            break;
        case 'w':
            strcat(s_c, ".--");
            break;
        case 'x':
            strcat(s_c, "-..-");
            break;
        case 'y':
            strcat(s_c, "-.--");
            break;
        case 'z':
            strcat(s_c, "--..");
            break;
        case '1':
            strcat(s_c, ".----");
            break;
        case '2':
            strcat(s_c, "..---");
            break;
        case '3':
            strcat(s_c, "...--");
            break;
        case '4':
            strcat(s_c, "....-");
            break;
        case '5':
            strcat(s_c, ".....");
            break;
        case '6':
            strcat(s_c, "-....");
            break;
        case '7':
            strcat(s_c, "--...");
            break;
        case '8':
            strcat(s_c, "---..");
            break;
        case '9':
            strcat(s_c, "----.");
            break;
        case '0':
            strcat(s_c, "-----");
            break;
        case '?':
            strcat(s_c, "..--..");
            break;
        case '!':
            strcat(s_c, "-.-.--");
            break;
        case '.':
            strcat(s_c, ".-.-.-");
            break;
        case ',':
            strcat(s_c, "--..--");
            break;
        }
        strcat(s_c, " ");
    }
    printf("\n\nCODIFICA:\n");
    printf("%s", s_c);
}
