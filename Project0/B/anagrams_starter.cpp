#include <stdio.h>
#include <assert.h>

#define SIZE 26

int are_anagrams(char[], char[]);

int main() {
    printf("running test 'iceman' and 'cinema'...\n");
    char iceman[] = "iceman";
    char cinema[] = "cinema";

//    printf("%d\n", are_anagrams(iceman, cinema));

    assert(are_anagrams(iceman, cinema));
    printf("passed!\n");

    printf("running test 'raganam' and 'anagram'...\n");
    char raganam[] = "raganam";
    char anagram[] = "anagram";

    assert(are_anagrams(raganam, anagram));
    printf("passed!\n");

    printf("running test 'listen' and 'silent'...\n");
    char listen[] = "listen";
    char silent[] = "silent";

    assert(are_anagrams(listen, silent));
    printf("passed!\n");

    printf("running test 'mole' and 'meal'...\n");
    char mole[] = "mole";
    char meal[] = "meal";

    assert(!are_anagrams(mole, meal));
    printf("passed!\n");

    printf("running test 'happy' and 'sad'...\n");
    char happy[] = "happy";
    char sad[] = "sad";

    assert(!are_anagrams(happy, sad));
    printf("passed!\n");
}

int are_anagrams(char first_word[], char second_word[]) {
    /* your code goes here */
    //int size1 = sizeof(first_word) - 2;
    //int size2 = sizeof(second_word) - 2;
    //printf("%d\n", size1);
    //printf("%d\n", size2);
    //int size1 = *(&first_word + 1) - first_word;
    //int size2 = *(&second_word + 1) - second_word;
    int is_anagram;
    int sum1=0;
    int sum2=0;
    int i=0;
    int j=0;
    while(first_word[i]){
        sum1 += first_word[i];
        i++;
    }
    while(second_word[j]){
        sum2 += second_word[j];
        j++;
    }
    if(sum1 != sum2){
        is_anagram=0;
    }else{
        is_anagram=1;
    }
    return (is_anagram);
}
