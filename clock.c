#include<stdio.h>
#include<conio.h>

void main()
{
    int h,m,s; 
    int a,b,c;
    double i;
    
    system("cls");// clear screen

    //Input Current time
    printf("Current Time");

    printf("\nHours:");
    scanf("%d",&h);
    printf("\nMinutes:");
    scanf("%d",&m);

    //Input Alarm time
    printf("Enter Alarm Time");
   
    printf("\nHours:");
    scanf("%d",&a);
    printf("\nMinutes:");
    scanf("%d",&b);
    printf("\nSeconds:");
    scanf("%d",&c);

while(1){  //Infinite Loop
    for(h;h<24;h++)
    {
        for (m;m< 60; m++)
        {
            for(s=1;s<60;s++)
            {
                system("cls");
                
                if(a==h&&b==m&&c==s) //if clock time = alarm time
                {
                    printf("\n\n\n\t\t\tALARM");

                    for(i=1;i<950000000;i++) // 5 secs delay
                {
                }
                s=s+5; // 5 seconds added to the time
                }

                else {printf("\n\n\n\t\t\t%d:%d:%d",h,m,s);}

                
                for(i=1;i<190000000;i++) //1 sec delay for getting correct time
                {
                }
            }
            s=0;
        }
        m=0;
        
    }
    h=0;
}
   getch();

}