#include <stdio.h>
int main() {
    // ADITYA 10097
    int pin = 2016, input ,attempts = 3;
    while(attempts > 0) {
        scanf("%d", & input);
        if(input == pin) {
            printf("Access Granted");
            return 0;
        } else {
            attempts--;
            printf("Wrong PIN\n");
        }
    }
    printf("Card Blocked");
    return 0;
}
// OUTPUT
// 2016
// Access Granted
// 2255
// Wrong PIN