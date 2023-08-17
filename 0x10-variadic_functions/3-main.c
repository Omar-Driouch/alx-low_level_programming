#include "variadic_functions.h"

int main()
{
    print_all("cifs", 'H', 42, 3.14, "Hello");
    print_all("ssi", "String", "Another string", NULL);
    print_all("csfi", 'A', "Test", 123, 2.71);
    
    return 0;
}
