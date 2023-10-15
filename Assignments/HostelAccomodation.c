#include <stdio.h>
int main() {

    int stud = 5;
    int sr_no[stud];
    char name[stud][50];
    float feesPaid[stud];

    printf("Enter the details for 5 students:\n");

    for (int i = 0; i < stud; i++) {
        sr_no[i] = i + 1;
        printf("Student %d:\n", sr_no[i]);
        printf("Name: ");
        scanf("%s", name[i]);
        printf("Fees Paid: $");
        scanf("%f", &feesPaid[i]);
    }
    printf("\nHostel Register:\n\n");
    printf("| Sr.| Student Name         | Fees Paid   |\n");
    for (int i = 0; i < stud; i++) {
        printf("| %2d | %-20s | $%10.2f |\n", sr_no[i], name[i], feesPaid[i]);
    }
    return 0;
}
