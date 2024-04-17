#include <iostream>

#define SUPER_MAGIC 0x1234ABCD

using namespace std;

void super_func(void)
{
    cout << "Called " << __FUNCTION__ << "() in file " << __FILE_NAME__ << endl;
}

uint32_t super_magic_get(void)
{
    return SUPER_MAGIC;
}
