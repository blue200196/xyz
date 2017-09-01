    /*
        NAME:AADHAR BANSAL
        ROLL NO:01
        SEC:A
        SEM:CS-4
    */


    #include<stdio.h>
    #include<conio.h>


    float f(float);

    void main()
    {
        float a,b,c,tol,temp=0;
        int it,i;
        do
        {
            printf("enter the value of a and b");
            scanf("%f%f",&a,&b);
            if(f(a)*f(b)>0)
                printf("\ntry again");
        }
        while(f(a)*f(b)>0);

        if(f(a)*f(b)==0)
        {
            if(f(a)==0)
                printf("the answer is %f",a);
            else
                printf("the answer is %f",b);
        }
        else
        {
            printf("enter the number of iterations");
            scanf("%d",&it);
            printf("enter the decimal places");
            scanf("%f",&tol);
            for(i=1;i<=it;i++)
            {
                c=(a+b)/2;
                if(f(c)==0)
                {
                    printf("the solution is %f",c);
                    break;
                }
                else
                {
                    temp=c;
                    if(f(c)*f(a)<0)
                        b=c;
                    else
                        a=c;

                    c=(a+b)/2;

                    if(fabs(c-temp)<=tol)
                    {
                        printf("the solution is %f",c);
                        break;
                    }
                    printf("\nthe value of iteration %d is %f",i,c);
                }
            }
        }

        getch();

    }
    float f(float s)                                                    //function of equation
        {
            float v;
            v=(s*s)+s-3;
            return(v);
        }
