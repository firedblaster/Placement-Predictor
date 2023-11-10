#include <stdio.h>
#include <string.h>

#define MAX_ROWS 1000
#define MAX_STRING_LENGTH 256

// Structure to represent data
struct Data {
    char sector[MAX_STRING_LENGTH];
};

int main() {
    char csv_file_name[] = "datafinalfinalfinal.csv";
    char txt_file_name[] = "histogramforher.txt";  // Change the output file extension to .txt

    struct Data data[MAX_ROWS];
    int data_count = 0;

    // Read data from the CSV file
    FILE *csv_file = fopen(csv_file_name, "r");
    if (csv_file == NULL) {
        printf("Error opening the CSV file.\n");
        return 1;
    }

    char line[MAX_STRING_LENGTH];
    while (fgets(line, sizeof(line), csv_file) && data_count < MAX_ROWS) {
        sscanf(line, "%*[^,],%*[^,],%*[^,],%255[^,],", data[data_count].sector);  // Parse the fourth column
        data_count++;
    }
    fclose(csv_file);

    // Count how many times each sector occurs using an array
    char sectors[MAX_ROWS][MAX_STRING_LENGTH];
    int counts[MAX_ROWS] = {0};
    int unique_count = 0;

    for (int i = 0; i < data_count; i++) {
        int found = 0;

        // Check if the sector is already in the array
        for (int j = 0; j < unique_count; j++) {
            if (strcmp(data[i].sector, sectors[j]) == 0) {
                counts[j]++;
                found = 1;
                break;
            }
        }

        // If the sector is not found, add it to the array
        if (!found) {
            strcpy(sectors[unique_count], data[i].sector);
            counts[unique_count]++;
            unique_count++;
        }
    }

    // Save the histogram to a text file
    FILE *txt_file = fopen(txt_file_name, "w");
    if (txt_file == NULL) {
        printf("Error creating the text file.\n");
        return 1;
    }

    fprintf(txt_file, "Sector Count\n");
    for (int i = 0; i < unique_count; i++) {
        fprintf(txt_file, "%s %d\n", sectors[i], counts[i]);
    }
    fclose(txt_file);

    return 0;
}
