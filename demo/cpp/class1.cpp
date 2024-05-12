#include "class1.h"

class1::class1() {
    int* ptr = new int[33];  // leak 4*33=132
    //mp->mem_del((char*)ptr);
}
