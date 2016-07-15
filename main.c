#include <stdio.h>

#define TAG 1

int main() {
    int x = 0;
#ifdef TAG
    int y = 1;
#endif
    if (x 
#ifdef TAG 
        && y 
#endif
    ) {
        printf("YES!");
    } else { 
        print("NO!");
    }
}
