/**
 * rot13 - Encodes a string using ROT13
 * @str: The input string to encode
 *
 * Return: A pointer to the modified string
 */
char *rot13(char *str)
{
    char *start = str;
    char *rot13_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char *rot13_encoded = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    while (*str)
    {
        char *letter = rot13_letters;
        char *encoded = rot13_encoded;
        int found = 0;

        while (*letter)
        {
            if (*str == *letter)
            {
                *str = *encoded;
                found = 1;
                break;
            }
            letter++;
            encoded++;
        }

        if (!found)
            str--;

        str++;
    }

    return start;
}

