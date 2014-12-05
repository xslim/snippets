static int
str_extract_int(char *str) {
    int num = 0;
    char *p = str;
    
    if (!p) {
        return 0;
    }
    
    while (*p) { // While there are more characters to process...
        if (isdigit(*p)) { // Upon finding a digit, ...
            num = (int)strtol(p, &p, 10); // Read a number, ...
        } else { // Otherwise, move on to the next character.
            p++;
        }
    }
    //free(p);
    return num;
}
