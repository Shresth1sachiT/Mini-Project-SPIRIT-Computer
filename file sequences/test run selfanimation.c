#include <stdio.h>
#include <unistd.h>

int main() {
    const int numFiles = 12; // Adjust the total number of files
    const int displayDuration = 300000; // 1.25 seconds in microseconds

    for (int i = 1; i <= numFiles; ++i) {
        // Generate the file name
        char fileName[10]; // Adjust the size based on your file names
        sprintf(fileName, "%d.txt", i);

        // Open the file in read mode
        FILE *file = fopen(fileName, "r");

        // Check if the file opened successfully
        if (file == NULL) {
            perror("Error opening file");
            return 1; // Return an error code
        }

        // Read and display the content of the file
        char ch;
        while ((ch = fgetc(file)) != EOF) {
            putchar(ch);
        }

        // Close the file
        fclose(file);

        // Wait for the specified duration
        usleep(displayDuration);

        // Clear the console screen
        printf("\033[H\033[J");
    }

    return 0; // Return 0 to indicate successful execution
}

