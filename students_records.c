#include <stdio.h>

struct Student {
    char name[20];
    char reg_no[20];
    float marks;
};

int main() {
    struct Student s;
    FILE *fptr;

    // Open file in read binary mode instead of append binary
    fptr = fopen("C:\\Users\\admin\\Downloads\\Documents\\results.dat", "rb");
    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Removed input prompts and scanf — we're reading from file now
    // printf("Enter student's name:\n");
    // scanf("%19s", s.name);
    // printf("Enter registration number:\n");
    // scanf("%19s", s.reg_no);
    // printf("Enter total marks:\n");
    // scanf("%f", &s.marks);

    // Read and display all student records
    printf("Stored student records:\n\n");
    while (fread(&s, sizeof(struct Student), 1, fptr)) {
        printf("Name: %s\n", s.name);
        printf("Registration Number: %s\n", s.reg_no);
        printf("Total Marks: %.2f\n", s.marks);
        printf("--------------------------\n");
    }

    fclose(fptr);
    return 0;
}