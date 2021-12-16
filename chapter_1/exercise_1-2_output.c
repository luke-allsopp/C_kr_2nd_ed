/*
[root@rtcsqastaging chapter_1]# cc ch1_exer2.c -o ch1_exer2                                                                                                                                                                                                                                                             
ch1_exer2.c: In function ‘main’:
ch1_exer2.c:7:12: warning: unknown escape sequence: '\c'
     printf("hello,\c world\n");
                 ^~~~~~~~~~~~~~~~~~
[root@rtcsqastaging chapter_1]# ./ch1_exer2
hello,c world


----

due to unknown escape char, \c was printed as "c" -> \ not printed by printf 
*/
