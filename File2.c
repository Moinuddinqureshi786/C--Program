// #include<stdio.h>
// int main()
/* {
    FILE*ptr;
    ptr=fopen("sana.txt","w");
    int moinuddin;
    moinuddin=786;
    fprintf(ptr,"The value is %d",moinuddin);
    fclose(ptr);
    return 0;
}*/

/* {
    FILE*ptr;
    ptr=fopen("moin1.txt","r");
    char c;
    c=fgetc(ptr);
    while (c!=EOF)  
    {
        printf("%c",c);
        c=fgetc(ptr);
        
    }
    return 0;    

}*/

// Write a program to read 3 integers from a file using FileIO

// #include<stdio.h>
// int main()
// {
//   int a,b,c;  
//   FILE*ptr;
//   ptr=fopen("mom.txt","r");

//   fscanf(ptr,"%d %d %d",&a,&b,&c);
//   printf("The values of a b and c is %d %d %d",a,b,c);
//   return 0;

// }



// Write a program to generate multiplication table of a given number in text format.

// #include<stdio.h>

// int main()
// {
//     FILE*ptr;
//     ptr=fopen("m.txt","w");
//     int num;
//     printf("Enter a number you need to multiply of it :\n");
//     scanf("%d",&num);
//     for(int i=0;i<10;i++)
//     {
//         fprintf(ptr,"%d x %d = %d\n",num,i+1,num*(i+1));
        
//     }
//     fclose(ptr);
//     return 0;
// }