#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int l,h;

    printf("enter your string:");
    scanf("%s",&s);

    l=0;
    h=strlen(s)-1;

    while (h > l) {
        if (s[l] != s[h]) {
            printf("Not a palindrome.\n");
            return 0;
        }
        l++;
        h--;
    }

    printf("Palindrome.\n");
    return 0;
    
    

    
}