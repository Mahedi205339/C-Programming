#include <stdio.h>
#include <string.h>

// Function to determine gender based on username
char* determineGender(char username[]) {
    int distinct_characters[128] = {0}; // Assuming ASCII characters
    
    // Count distinct characters
    for (int i = 0; i < strlen(username); i++) {
        distinct_characters[username[i]] = 1;
    }
    
    int count = 0;
    // Count the number of distinct characters
    for (int i = 0; i < 128; i++) {
        if (distinct_characters[i] == 1) {
            count++;
        }
    }
    
    // Return gender based on count
    if (count % 2 == 0) {
        return "female";
    } else {
        return "male";
    }
}

int main() {
    char username[100];
    
    printf("Enter username: ");
    scanf("%s", username);
    
    char* gender = determineGender(username);
    
    printf("The user is %s.\n", gender);
    
    return 0;
}
