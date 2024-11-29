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
        if ((i + 1) % 5 == 0) {  // Print new line every 5 seats for better formatting
            printf("\n");
        }
    }
    printf("\n");
}
 }
    printf("\n");
}

// Function to randomly book seats
void bookRandomSeats(char seats[], int totalSeats, int seatsToBook) {
    int booked = 0;
    
    // Seed the random number generator
    srand(time(0));
    
    while (booked < seatsToBook) {
        int randomIndex = rand() % totalSeats;  // Generate a random index
        
        if (seats[randomIndex] == 'A') {  // Check if the seat is available
            seats[randomIndex] = 'B';  // Book the seat
            booked++;
        }
    }
}

int main() {
    char seats[TOTAL_SEATS];
    int seatsToBook;

    // Ask how many seats to book
    printf("Enter the number of seats to book (1 to %d): ", TOTAL_SEATS);
    scanf("%d", &seatsToBook);

    // Check if the input is valid
    if (seatsToBook < 1 || seatsToBook > TOTAL_SEATS) {
        printf("Invalid number of seats to book!\n");
        return 1;
    }

    // Initialize seats array
    initializeSeats(seats, TOTAL_SEATS);

    // Book the seats
    bookRandomSeats(seats, TOTAL_SEATS, seatsToBook);

    // Print the final seat arrangement
    printSeats(seats, TOTAL_SEATS);

    return 0;
}
