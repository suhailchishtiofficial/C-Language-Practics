//  Vowel or Consonant

#include<stdio.h>
int main(){
    char ch = 'i';
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            printf("vowel.\n");
        } else {
            printf(" consonant.\n");
        }
    return 0;
}


// #include <stdio.h>
// #include <ctype.h>
    
// int main() {
//     char ch;

//     printf("Enter a single alphabet character: ");
//     scanf("%c", &ch);

//     ch = tolower(ch);
//     if (isalpha(ch)) {
//         if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
//             printf("%c is a vowel.\n", ch);
//         } else {
//             printf("%c is a consonant.\n", ch);
//         }
//     } else {
//         printf("Invalid input. Please enter an alphabet character.\n");
//     }

//     return 0;
// }
