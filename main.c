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
// bitwise opration
/*int main (){

    int x = 12 ; // 1100
    int y =7;//0111

    int z = x & y ;//1100
                   //ftff = 0100 =4
                   //0111

    int a = x | y ;//1100
                   //tttt = 1111 = 15
                   //0111

    int b = x ^ y ;//1100
                   //tftt = 1011 = 11
                   //0111

    printf("%d\n",z);
    printf("%d\n",a);
    printf("%d\n",b);


}*/

// PRINT the max number

/*int main(){

    int x , y, z ;

    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

    int max;

    max = x ; //defult;

    if(max<y)
    {
        max = y;
    }
    if(max<z)
    {
        max = z ;
    }
    printf("the max number is : %d ", max);
}*/
//************************************************************************
// print the max and min number
/*int main(){

    int x , y, z ;

    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);

    int max = x ; //defult;
    int min = y ;//defult;

    if(a < y)
    {
        max = y;
        min =x;
    }
    if(max<z)
    {
        max = z ;
    }
    if(min > z)
    {
        min = z;
    }
    printf("the max number is : %d , and the min number is : %d ", max, min);



}*/

//**************************************************************************
// sort the three number 

/*int main() {
    int num1, num2, num3;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Sort the numbers using if conditions
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Display the sorted numbers
    printf("Sorted numbers: %d %d %d\n", num1, num2, num3);

    return 0;
}*/
//make function to sort the number

/*int main (){

     int a, b, c, d, f, g;

    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&f,&g);

    int arr [] = {a,b,c,d,f,g};

    for(int i = 0 ; i < 6; i++)
    {
        for (int y = 0; y < 5; y++)
        {
            if(arr[y] > arr[y+1])
            {
                int temp = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = temp;
            }
        }
       
        
    }
   
    
      
    printf("%d, %d , %d , %d , %d ,%d  ", arr[0],arr[1],arr[2] ,arr[3],arr[4],arr[5]); 

}*/

//****************************************************************

//make function to print the second max namber of the array

int main(){

    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int numbers[size];
    for (int i = 0; i < size; i++) {
        printf("Enter the number : ");
        scanf("%d", &numbers[i]);
    }
    printf("The numbers are : ");
    for (int i = 0; i < size; i++) {
        printf("%d \n", numbers[i]);
    }

    int max = numbers[0];
    int secondMax = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] > max) {
            secondMax = max;
            max = numbers[i];
        } else if (numbers[i] > secondMax && numbers[i] < max) {
            secondMax = numbers[i];
        }
    }

    printf("The second maximum number is: %d\n", secondMax);



}
