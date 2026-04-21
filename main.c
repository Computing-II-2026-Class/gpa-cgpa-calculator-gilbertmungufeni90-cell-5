/*
Name: MUNGUFENI GILBERT
Registration Number: 25/U/BIO/01398/PD
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // these are the scores for sem1
    int s1_1, s1_2, s1_3, s1_4, s1_5, s1_6, s1_7, s1_8;
    // these are the scores for sem2
    int s2_1, s2_2, s2_3, s2_4, s2_5, s2_6, s2_7, s2_8;
    
    // Credit Units (CUs) 
    int c1_1=4, c1_2=3, c1_3=3, c1_4=3, c1_5=3, c1_6=3, c1_7=2, c1_8=3;
    int c2_1=4, c2_2=3, c2_3=3, c2_4=3, c2_5=3, c2_6=3, c2_7=3, c2_8=3;

    // Grade points 
    double gp1_1, gp1_2, gp1_3, gp1_4, gp1_5, gp1_6, gp1_7, gp1_8;
    double gp2_1, gp2_2, gp2_3, gp2_4, gp2_5, gp2_6, gp2_7, gp2_8;

    // Grades f
    char g1_1, g1_2, g1_3, g1_4, g1_5, g1_6, g1_7, g1_8;
    char g2_1, g2_2, g2_3, g2_4, g2_5, g2_6, g2_7, g2_8;

    // Reading Semester I scores
    scanf("%d %d %d %d %d %d %d %d", &s1_1, &s1_2, &s1_3, &s1_4, &s1_5, &s1_6, &s1_7, &s1_8);
    // Reading Semester II scores
    scanf("%d %d %d %d %d %d %d %d", &s2_1, &s2_2, &s2_3, &s2_4, &s2_5, &s2_6, &s2_7, &s2_8);

    // --- Validation and Grade Assignment for Semester 1 ---
    // Course 1.1
    if (s1_1 < 0 || s1_1 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s1_1 >= 80) { gp1_1 = 5.0; g1_1 = 'A'; }
    else if (s1_1 >= 70) { gp1_1 = 4.0; g1_1 = 'B'; }
    else if (s1_1 >= 60) { gp1_1 = 3.0; g1_1 = 'C'; }
    else if (s1_1 >= 50) { gp1_1 = 2.0; g1_1 = 'D'; }
    else { gp1_1 = 0.0; g1_1 = 'F'; }

    // Course 1.2
    if (s1_2 < 0 || s1_2 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s1_2 >= 80) { gp1_2 = 5.0; g1_2 = 'A'; }
    else if (s1_2 >= 70) { gp1_2 = 4.0; g1_2 = 'B'; }
    else if (s1_2 >= 60) { gp1_2 = 3.0; g1_2 = 'C'; }
    else if (s1_2 >= 50) { gp1_2 = 2.0; g1_2 = 'D'; }
    else { gp1_2 = 0.0; g1_2 = 'F'; }

    // Course 1.3
    if (s1_3 < 0 || s1_3 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s1_3 >= 80) { gp1_3 = 5.0; g1_3 = 'A'; }
    else if (s1_3 >= 70) { gp1_3 = 4.0; g1_3 = 'B'; }
    else if (s1_3 >= 60) { gp1_3 = 3.0; g1_3 = 'C'; }
    else if (s1_3 >= 50) { gp1_3 = 2.0; g1_3 = 'D'; }
    else { gp1_3 = 0.0; g1_3 = 'F'; }

    // Course 1.4
    if (s1_4 < 0 || s1_4 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s1_4 >= 80) { gp1_4 = 5.0; g1_4 = 'A'; }
    else if (s1_4 >= 70) { gp1_4 = 4.0; g1_4 = 'B'; }
    else if (s1_4 >= 60) { gp1_4 = 3.0; g1_4 = 'C'; }
    else if (s1_4 >= 50) { gp1_4 = 2.0; g1_4 = 'D'; }
    else { gp1_4 = 0.0; g1_4 = 'F'; }

    // Course 1.5
    if (s1_5 < 0 || s1_5 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s1_5 >= 80) { gp1_5 = 5.0; g1_5 = 'A'; }
    else if (s1_5 >= 70) { gp1_5 = 4.0; g1_5 = 'B'; }
    else if (s1_5 >= 60) { gp1_5 = 3.0; g1_5 = 'C'; }
    else if (s1_5 >= 50) { gp1_5 = 2.0; g1_5 = 'D'; }
    else { gp1_5 = 0.0; g1_5 = 'F'; }

    // Course 1.6
    if (s1_6 < 0 || s1_6 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s1_6 >= 80) { gp1_6 = 5.0; g1_6 = 'A'; }
    else if (s1_6 >= 70) { gp1_6 = 4.0; g1_6 = 'B'; }
    else if (s1_6 >= 60) { gp1_6 = 3.0; g1_6 = 'C'; }
    else if (s1_6 >= 50) { gp1_6 = 2.0; g1_6 = 'D'; }
    else { gp1_6 = 0.0; g1_6 = 'F'; }

    // Course 1.7
    if (s1_7 < 0 || s1_7 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s1_7 >= 80) { gp1_7 = 5.0; g1_7 = 'A'; }
    else if (s1_7 >= 70) { gp1_7 = 4.0; g1_7 = 'B'; }
    else if (s1_7 >= 60) { gp1_7 = 3.0; g1_7 = 'C'; }
    else if (s1_7 >= 50) { gp1_7 = 2.0; g1_7 = 'D'; }
    else { gp1_7 = 0.0; g1_7 = 'F'; }

    // Course 1.8
    if (s1_8 < 0 || s1_8 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s1_8 >= 80) { gp1_8 = 5.0; g1_8 = 'A'; }
    else if (s1_8 >= 70) { gp1_8 = 4.0; g1_8 = 'B'; }
    else if (s1_8 >= 60) { gp1_8 = 3.0; g1_8 = 'C'; }
    else if (s1_8 >= 50) { gp1_8 = 2.0; g1_8 = 'D'; }
    else { gp1_8 = 0.0; g1_8 = 'F'; }

    // --- Semester 2 Logic ---
    // Course 2.1
    if (s2_1 < 0 || s2_1 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s2_1 >= 80) { gp2_1 = 5.0; g2_1 = 'A'; }
    else if (s2_1 >= 70) { gp2_1 = 4.0; g2_1 = 'B'; }
    else if (s2_1 >= 60) { gp2_1 = 3.0; g2_1 = 'C'; }
    else if (s2_1 >= 50) { gp2_1 = 2.0; g2_1 = 'D'; }
    else { gp2_1 = 0.0; g2_1 = 'F'; }

    // Course 2.2
    if (s2_2 < 0 || s2_2 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s2_2 >= 80) { gp2_2 = 5.0; g2_2 = 'A'; }
    else if (s2_2 >= 70) { gp2_2 = 4.0; g2_2 = 'B'; }
    else if (s2_2 >= 60) { gp2_2 = 3.0; g2_2 = 'C'; }
    else if (s2_2 >= 50) { gp2_2 = 2.0; g2_2 = 'D'; }
    else { gp2_2 = 0.0; g2_2 = 'F'; }

    // Course 2.3
    if (s2_3 < 0 || s2_3 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s2_3 >= 80) { gp2_3 = 5.0; g2_3 = 'A'; }
    else if (s2_3 >= 70) { gp2_3 = 4.0; g2_3 = 'B'; }
    else if (s2_3 >= 60) { gp2_3 = 3.0; g2_3 = 'C'; }
    else if (s2_3 >= 50) { gp2_3 = 2.0; g2_3 = 'D'; }
    else { gp2_3 = 0.0; g2_3 = 'F'; }

    // Course 2.4
    if (s2_4 < 0 || s2_4 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s2_4 >= 80) { gp2_4 = 5.0; g2_4 = 'A'; }
    else if (s2_4 >= 70) { gp2_4 = 4.0; g2_4 = 'B'; }
    else if (s2_4 >= 60) { gp2_4 = 3.0; g2_4 = 'C'; }
    else if (s2_4 >= 50) { gp2_4 = 2.0; g2_4 = 'D'; }
    else { gp2_4 = 0.0; g2_4 = 'F'; }

    // Course 2.5
    if (s2_5 < 0 || s2_5 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s2_5 >= 80) { gp2_5 = 5.0; g2_5 = 'A'; }
    else if (s2_5 >= 70) { gp2_5 = 4.0; g2_5 = 'B'; }
    else if (s2_5 >= 60) { gp2_5 = 3.0; g2_5 = 'C'; }
    else if (s2_5 >= 50) { gp2_5 = 2.0; g2_5 = 'D'; }
    else { gp2_5 = 0.0; g2_5 = 'F'; }

    // Course 2.6
    if (s2_6 < 0 || s2_6 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s2_6 >= 80) { gp2_6 = 5.0; g2_6 = 'A'; }
    else if (s2_6 >= 70) { gp2_6 = 4.0; g2_6 = 'B'; }
    else if (s2_6 >= 60) { gp2_6 = 3.0; g2_6 = 'C'; }
    else if (s2_6 >= 50) { gp2_6 = 2.0; g2_6 = 'D'; }
    else { gp2_6 = 0.0; g2_6 = 'F'; }

    // Course 2.7
    if (s2_7 < 0 || s2_7 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s2_7 >= 80) { gp2_7 = 5.0; g2_7 = 'A'; }
    else if (s2_7 >= 70) { gp2_7 = 4.0; g2_7 = 'B'; }
    else if (s2_7 >= 60) { gp2_7 = 3.0; g2_7 = 'C'; }
    else if (s2_7 >= 50) { gp2_7 = 2.0; g2_7 = 'D'; }
    else { gp2_7 = 0.0; g2_7 = 'F'; }

    // Course 2.8
    if (s2_8 < 0 || s2_8 > 100) { printf("Invalid score entered\n"); return 0; }
    if (s2_8 >= 80) { gp2_8 = 5.0; g2_8 = 'A'; }
    else if (s2_8 >= 70) { gp2_8 = 4.0; g2_8 = 'B'; }
    else if (s2_8 >= 60) { gp2_8 = 3.0; g2_8 = 'C'; }
    else if (s2_8 >= 50) { gp2_8 = 2.0; g2_8 = 'D'; }
    else { gp2_8 = 0.0; g2_8 = 'F'; }

    // --- GPA and CGPA Calculation ---
    double w1 = (gp1_1*c1_1) + (gp1_2*c1_2) + (gp1_3*c1_3) + (gp1_4*c1_4) + (gp1_5*c1_5) + (gp1_6*c1_6) + (gp1_7*c1_7) + (gp1_8*c1_8);
    int tc1 = c1_1 + c1_2 + c1_3 + c1_4 + c1_5 + c1_6 + c1_7 + c1_8;
    double sem1_gpa = w1 / tc1;

    double w2 = (gp2_1*c2_1) + (gp2_2*c2_2) + (gp2_3*c2_3) + (gp2_4*c2_4) + (gp2_5*c2_5) + (gp2_6*c2_6) + (gp2_7*c2_7) + (gp2_8*c2_8);
    int tc2 = c2_1 + c2_2 + c2_3 + c2_4 + c2_5 + c2_6 + c2_7 + c2_8;
    double sem2_gpa = w2 / tc2;

    double cgpa = (w1 + w2) / (tc1 + tc2);

    // --- Full Academic Report Output ---
    printf("\nCOURSE\tSCORE\tGRADE\tGP\tCU\tWEIGHTED\n");
    printf("TEMB1101\t%d\t%c\t%.1f\t%d\t%.1f\n", s1_1, g1_1, gp1_1, c1_1, gp1_1*c1_1);
    printf("TEMB1102\t%d\t%c\t%.1f\t%d\t%.1f\n", s1_2, g1_2, gp1_2, c1_2, gp1_2*c1_2);
    printf("TEMB1103\t%d\t%c\t%.1f\t%d\t%.1f\n", s1_3, g1_3, gp1_3, c1_3, gp1_3*c1_3);
    printf("TEMB1104\t%d\t%c\t%.1f\t%d\t%.1f\n", s1_4, g1_4, gp1_4, c1_4, gp1_4*c1_4);
    printf("TEMB1105\t%d\t%c\t%.1f\t%d\t%.1f\n", s1_5, g1_5, gp1_5, c1_5, gp1_5*c1_5);
    printf("TEMB1106\t%d\t%c\t%.1f\t%d\t%.1f\n", s1_6, g1_6, gp1_6, c1_6, gp1_6*c1_6);
    printf("TEMB1107\t%d\t%c\t%.1f\t%d\t%.1f\n", s1_7, g1_7, gp1_7, c1_7, gp1_7*c1_7);
    printf("TEMB1108\t%d\t%c\t%.1f\t%d\t%.1f\n", s1_8, g1_8, gp1_8, c1_8, gp1_8*c1_8);

    printf("TEMB1201\t%d\t%c\t%.1f\t%d\t%.1f\n", s2_1, g2_1, gp2_1, c2_1, gp2_1*c2_1);
    printf("TEMB1202\t%d\t%c\t%.1f\t%d\t%.1f\n", s2_2, g2_2, gp2_2, c2_2, gp2_2*c2_2);
    printf("TEMB1203\t%d\t%c\t%.1f\t%d\t%.1f\n", s2_3, g2_3, gp2_3, c2_3, gp2_3*c2_3);
    printf("TEMB1204\t%d\t%c\t%.1f\t%d\t%.1f\n", s2_4, g2_4, gp2_4, c2_4, gp2_4*c2_4);
    printf("TEMB1205\t%d\t%c\t%.1f\t%d\t%.1f\n", s2_5, g2_5, gp2_5, c2_5, gp2_5*c2_5);
    printf("TEMB1206\t%d\t%c\t%.1f\t%d\t%.1f\n", s2_6, g2_6, gp2_6, c2_6, gp2_6*c2_6);
    printf("TEMB1207\t%d\t%c\t%.1f\t%d\t%.1f\n", s2_7, g2_7, gp2_7, c2_7, gp2_7*c2_7);
    printf("TEMB1208\t%d\t%c\t%.1f\t%d\t%.1f\n", s2_8, g2_8, gp2_8, c2_8, gp2_8*c2_8);

    // this is the required summary outpu
    printf("\nSemester I GPA: %.2f\n", sem1_gpa);
    printf("Semester II GPA: %.2f\n", sem2_gpa);
    printf("CGPA: %.2f\n", cgpa);

    // determinig the classification of a student
    if (cgpa >= 4.40) {
        printf("Classification: First Class\n");
    } else if (cgpa >= 3.60) {
        printf("Classification: Second Class Upper\n");
    } else if (cgpa >= 2.80) {
        printf("Classification: Second Class Lower\n");
    } else if (cgpa >= 2.00) {
        printf("Classification: Pass\n");
    } else {
        printf("Classification: Fail\n");
    }

    return 0;
}
