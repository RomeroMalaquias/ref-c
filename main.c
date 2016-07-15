#include <stdio.h>

#define TAG 1

int main() {
    int x = 0;
#ifdef TAG
    int y = 1;
#endif
    int test = x;
#ifdef TAG
    test = test && y;
#endif
    if (test)
    {
        printf("YES!");
    } else { 
        print("NO!");
    }
}
