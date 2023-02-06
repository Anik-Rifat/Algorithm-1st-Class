// Function Even ODD

#include<stdio.h>
int main()
{
int a; 
scanf("%d",&a);
EvenOdd(a);
return 0;

}
void EvenOdd(int a)
{
    if(a%2==0)
    {
        printf(" Even\n");
        
    }
    else 
    {
        printf("Odd\n");
    }
}


// ......................2............Function Sum With loop.........


#include<stdio.h>
int summation (int n){
    int i , sum=0;
    for(i=1; i<=n; i++){
        sum=sum+i;
    }
    return sum;
}



int main ()
{
    int n;
  scanf(" %d", &n);
  
    printf("sum = %d\n ", summation(n));
    return 0;
}

// ..........................3..................*/


#include<stdio.h>

int summation( int num){
    if(num !=0 )
    return num + summation(num-1);
    else 
    return num;
}


  int main ()
{
    int num;
    printf(" Enter a possitve integer ");
  scanf(" %d", &num);
    printf("sum = %d  ",summation(num) );
    return 0;
}









