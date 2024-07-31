 #include <stdio.h>
 #include <stdlib.h>
 void displaybits(int x);

 int main(void)
 {
         int num;
         printf("Enter a number : ");
        scanf("%d",&num);
 
         displaybits(num);
         printf("Two's complement is : \n");
         displaybits(~abs(num)+1);
 
         return 0;
 }
 
 void displaybits(int x)
 {
         int i, mask;
         for(i=31; i>=0; i--)
         {
                 mask = 1<<i;
                 printf("%d",(x&mask)?1:0);
                 if(i%4==0)
                         printf(" ");
         }
         printf("\n");
 
 }