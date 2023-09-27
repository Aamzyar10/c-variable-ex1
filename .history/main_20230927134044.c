#include <stdio.h>
// we want to know what is the last num of the array 
// we want to now what is the last namber can we reach depend on first number and the distance and variable of num 
/*int main(){

    int n1;
    int d;
    int v;

    printf("enter the first num : ");
    scanf("%d", &n1);

    printf("enter the destance num : ");
    scanf("%d", &d);

    printf("enter the enter the var number num : ");
    scanf("%d", &v);

     int nlast = n1 ;

    for (int i = 0; i < d-1; i++)
    {
        nlast += v;

    }
    printf("%d \n",nlast);
}*/
//*************************************************************************************

//find the sum of set of numbers that between n1 , nlast and the var between eche num v 
/*void main(){

    int n1;
    int nlast;
    int v;
    printf("enter the first num : ");
    scanf("%d", &n1);

    printf("enter the last num : ");
    scanf("%d", &nlast);

    printf("enter the var number num : ");
    scanf("%d", &v); 
    
    //defult number 
    double sum  = 0;

    for (int i = n1; i <= nlast; i+=v)
    {
       sum += i;
    }

    printf("%lf\n",sum);
    

}*/

//*********************************************************************************
//print only the number after . of the num that user enter using casting
/*int main(){

    float data;

    scanf("%f",&data);

    int x = data;//int x = (int)data

    printf("%d\n",x);
    
    float res = data - x;

    printf("%.2f\n",res);
    or 
    printf("%.2f",data - (int)data);

    return 0 ;
}*/
//*************************************************************************************

// the sum of diget
/*void main(){
    int n =1234;

    int unit = n % 10;
    printf("%d\n",unit); //3 (12*10 = 120 ---> 3)

    int tens = (n/10)%10; // 2 (12.3 ---> 10*1 =10 --> 2.3)
    printf("%d\n",tens);

     int handreds = (n / 100)%10;// 1 --> 1.23
    printf("%d\n",handreds);

    int southand = n/1000;
    printf("%d\n",southand);
    
}*/
//**************************************************************************
/*int main()
{
   int x = 6; int y = 5 ; int z = 4;

   y = ++x + z++; 

   z = y++ * ++x;

   x = -y + -z;

   printf("%d\n",x);

    return 0;
}*/
//===========================================================================
/*int main()
{

    int number;
    printf("enter your namber please :  ");
    scanf("%d",&number);

    if(number % 2 == 0)
    {
        printf("your number is even !\n");
    }
    else if(number % 2  != 0)
    {
        printf("your namber is odd ! \n");
    }
    else
    {
        printf("Error number !\n");
    }

}*/
//================================================================
/*int main(){

int x , y, z ;

scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);

if(x>y){

    if(x>z){

        if(y>z){

            printf("%d, %d, %d \n",x,y,z);
        }else{

            printf("%d, %d, %d \n",x,z,y);

        }

    }else{

        printf("%d, %d, %d \n",z,x,y);
    }
}
else{

    if(y>z){

       if(x>z){
        printf("%d, %d, %d \n",y,x,z);
       }else{
        printf("%d, %d, %d \n",y,z,x);
       }
    }else{
        printf("%d, %d, %d \n",z,y,x);
    }
}


}*/
//=================================================================
int main (){
    int 


}

