/*exercise 1-6

verify that the expression getchar()!=EOF is 0 or 1
*/

#include <stdio.h>

int main()
{ 
   printf("value of expression 'getchar() != EOF': %d\n", getchar() != EOF);
   return 0;   
}


/*
allsolu@ALLSOLU-DESKTOP:~/C_kr_2nd_ed/chapter_1$ ./exercise_1-6
                                                                    < ENTER SENT
value of expression 'getchar() != EOF': 1


allsolu@ALLSOLU-DESKTOP:~/C_kr_2nd_ed/chapter_1$ ./exercise_1-6
                                                                     < UNIX Style ctrl + D sent
value of expression 'getchar() != EOF': 0


allsolu@ALLSOLU-DESKTOP:~/C_kr_2nd_ed/chapter_1$ ./exercise_1-6
^Z
[1]+  Stopped                 ./exercise_1-6
allsolu@ALLSOLU-DESKTOP:~/C_kr_2nd_ed/chapter_1$
                                                                      < UNIX Style ctrl + D sent

output = 1 depends on input char being != EOF
*/