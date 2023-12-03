
#include <stdio.h>

int main()
{
    float a[5];
    printf("Enter length \n");
    for(int i=0;i<5;i++)
          {
              scanf("%f",&a[i]);
          }
          printf("Enter trail 1 \n");
          int t1[5],t2[5];
          for(int i=0;i<5;i++)
          {
              scanf("%d",&t1[i]);
          }
          printf("Enter trail 2 \n");
          for(int i=0;i<5;i++)
          {
              scanf("%d",&t2[i]);
          }
          float ZE=1,ZC,LC=0.01;
          if(ZE>0)
          ZC=-(ZE/100);
          else
          ZC=(ZE/100);
          float psr[3],hsc[3],orr[3],cr[3];
          printf("Enter Pitch scale reading \n");
           for(int i=0;i<3;i++)
          {
              scanf("%f",&psr[i]);
          }
          printf("Enter Head scale reading \n");
           for(int i=0;i<3;i++)
          {
              scanf("%f",&hsc[i]);
          }
          printf("Enter y,R\n");
          float y,R;
          scanf("%f %f",&y,&R);
         
          float m[5];
          for(int i=0;i<5;i++)
          {
              m[i]=(float)((float)(t1[i]+(float)t2[i])/2);
          }
           float s=0;
           float d[5];
            for(int i=0;i<5;i++)
          {
            d[i]=((m[i]/10)*(m[i]/10));
          }
           for(int i=0;i<5;i++)
          {
            s=s+(a[i]/d[i]);
          }
         
           for(int i=0;i<3;i++)
          {
             orr[i]=psr[i]+(hsc[i]*LC);
          }
           for(int i=0;i<3;i++)
          {
              cr[i]=orr[i]+(ZC);
          }
         float  b=0;
           for(int i=0;i<3;i++)
          {
           b=b+(cr[i]);  
          }
          float r;
          r=b/3;
       printf("\n-------------------Mean---------------------");
          printf("\n-------------------( S )--------------------\n\n");
          for(int i=0;i<5;i++)
          {
              printf("Mean   %d = %.2f S",i+1,m[i]);
          }
          printf("\n\n------------------Time period---------------");
          printf("\n-------------------( S )--------------------\n\n");
          for(int i=0;i<5;i++)
          {
              printf("Time period T   %d = %.2f S\n",i+1,(m[i]/10));
          }
          printf("\n\n-------------------Time periopd (T^2)----------------");
          printf("\n----------------------( S^2)-------------------------\n\n");
          for(int i=0;i<5;i++)
          {
             printf("Time period (T^2) %d = %.2f s\n",i+1,((m[i]/10)*(m[i]/10)));
          }
          printf("\n\n---------------------------L/T^2----------------------------");
          printf("\n---------------------*10^-2ms^-2----------------------------\n\n");
          for(int i=0;i<5;i++)
          {
              printf("L/T^2 %d = %.2f ms^-2\n",i+1,((a[i])/((m[i]/10)*(m[i]/10))));
          }
          printf("\n\n-----------------------------mean( L/T^2)---------------------------");
         printf("\nMean(L/T^2) = %.3f*10^-2 ms^-2",s/5);
         printf("\n\nZero Correction(Z.C) = %.2f\n",ZC);
          printf("\n\n-------------------------Table - 2-----------------------------------");
          for(int i=0;i<3;i++)
          {
              printf("O.R %d = %.2f (10^-3m)",i+1,orr[i]);
          }
          printf("\n\n-------------------------------Correct Reading----------------------------\n");
           for(int i=0;i<3;i++)
          {
              printf("C.R %d = %.2f (10^-3m)\n",i+1,cr[i]);
              
          }
         printf("\n\n Mean (C.R) = %.3f*10^-2\n",b/3);
          printf("Mean radius of the wire r = %.3f\n",r/2);
          float j=38;
          float I;
          float U;
          U=R*R;
          I=y*U;
          float n,v,x;
          x=8*3.18*I;
          v=r*r*r*r;
          n=v/x;
          printf("\nI = %.2f*10^-3kgm^2",((y*(R*R)/2)));
          printf("\nn = %.4f*10^16N/M^2",n);
         
          
}

         