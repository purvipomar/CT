#include<stdio.h>
void initializeSeats(char seats[], int totalSeats) {
    for (int i = 0; i < totalSeats; i++) {
        seats[i] = 'A';  // 'A' stands for available seat
    }
} 
void printSeats(char seats[], int totalSeats) {
    printf("Seats: \n");
    for (int i = 0; i < totalSeats; i++) {
        printf("%c ", seats[i]);
        if ((i + 1) % 5 == 0) {  
            printf("\n");
        }
    }
    printf("\n");
}
 }
    printf("\n");
