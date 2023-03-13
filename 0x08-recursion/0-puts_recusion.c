void _puts_recursion(char *s){
    if (*s == '\0'){ // base case - check if the string is empty
        _putchar('\n');
        return;
    }
    _putchar(*s);
    // _puts_recursion(s + 1);
}