#include <iostream>
#include "super.h"
#include "version.h"

using namespace std;

void print_version(void);

int main ()
{
    print_version();
    super_func();
    return 0;
}

void print_version(void)
{
    cout << "Version: " 
        << VER_MAJOR << "." 
        << VER_MINOR << "." 
        << VER_PATCH 
        << endl;
}
