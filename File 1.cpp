#include <stdio.h>

struct student {
    int id;
    char name[50];
    float percent;
};

int main() {
    FILE *file;
    int n;

    // Open file in write mode
    file = fopen("student.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Input the number of records
    printf("Enter the number of student records: ");
    scanf("%d", &n);

    // Input and write student records to file
    struct student s;
    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &s.id);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Percentage: ");
        scanf("%f", &s.percent);
        fprintf(file, "%d %s %.2f\n", s.id, s.name, s.percent);
    }

    // Close file
    fclose(file);

    // Open file in read mode
    file = fopen("student.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and display student records from file
    printf("\nStudent records:\n");
    printf("ID\tName\tPercentage\n");
    while (fscanf(file, "%d %s %f", &s.id, s.name, &s.percent) != EOF) {
        printf("%d\t%s\t%.2f\n", s.id, s.name, s.percent);
    }

    // Close file
    fclose(file);

    return 0;
}
