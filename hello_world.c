#include <stdio.h>

int main(void) {
unsigned char tab[1024] = {0};
unsigned char *ptr = tab;
ptr++;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
while (*ptr) {
--(*ptr);
ptr--;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
ptr++;
}
ptr--;
++(*ptr);
++(*ptr);
putchar(*ptr);
ptr++;
ptr++;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
while (*ptr) {
--(*ptr);
ptr--;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
ptr++;
}
ptr--;
++(*ptr);
putchar(*ptr);
ptr++;
ptr++;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
while (*ptr) {
--(*ptr);
ptr--;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
ptr++;
}
ptr--;
--(*ptr);
--(*ptr);
putchar(*ptr);
putchar(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
putchar(*ptr);
ptr++;
ptr++;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
while (*ptr) {
--(*ptr);
ptr--;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
ptr++;
}
ptr--;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
putchar(*ptr);
ptr++;
++(*ptr);
++(*ptr);
while (*ptr) {
--(*ptr);
ptr--;
--(*ptr);
--(*ptr);
--(*ptr);
--(*ptr);
--(*ptr);
ptr++;
}
ptr--;
--(*ptr);
--(*ptr);
putchar(*ptr);
ptr++;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
while (*ptr) {
--(*ptr);
ptr--;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
ptr++;
}
ptr--;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
putchar(*ptr);
ptr++;
++(*ptr);
++(*ptr);
while (*ptr) {
--(*ptr);
ptr--;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
ptr++;
}
ptr--;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
putchar(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
putchar(*ptr);
--(*ptr);
--(*ptr);
--(*ptr);
--(*ptr);
--(*ptr);
--(*ptr);
putchar(*ptr);
ptr++;
++(*ptr);
++(*ptr);
while (*ptr) {
--(*ptr);
ptr--;
--(*ptr);
--(*ptr);
--(*ptr);
--(*ptr);
ptr++;
}
ptr--;
putchar(*ptr);
ptr++;
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
++(*ptr);
while (*ptr) {
--(*ptr);
ptr--;
--(*ptr);
--(*ptr);
--(*ptr);
--(*ptr);
--(*ptr);
--(*ptr);
--(*ptr);
--(*ptr);
--(*ptr);
--(*ptr);
ptr++;
}
ptr--;
++(*ptr);
++(*ptr);
putchar(*ptr);
++(*ptr);
putchar(*ptr);
}