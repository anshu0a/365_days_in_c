// Home work:
// 1. finding no of digits using loop
// 2. print first and last digits of given no.
// eg: 2018  8 last digit , 2 first digit.
// 3. Finding max, min digits of given no.
// Eg: 2375  7 max, 2 min

#include<stdio.h>
int main(){
    int a, cnt = 0;
    scanf("%d",&a);
    if(a < 0 ){
        a = -a;
    }else if(a == 0){
        cnt = 1;
    }
    while(a > 0){
       cnt++;
       a = a/10;
    }
    printf("Count of the digits is : %d",cnt);
    
}


//                                                                                    2nd answer


#include<stdio.h>

int count(int a){
    int cnt = 0;
    if(a < 0 ){
        a = -a;
    }else if(a == 0){
        cnt = 1;
    }
    while(a > 0){
       cnt++;
       a = a/10;
    }
    return cnt;
};

float powx(int a , int b){
    int po = 1;
    if(b < 0 ){
        b = -b;
    }
    while(b > 0){
        po *= a;
        b--;
    }
    if(b < 0){
        return (1/po);
    }else{
        return (float)po;
    }
}
int main(){
    int a; scanf("%d",&a);
    int c = count(a) - 1 ;
    int por = (int)powx(10,c);
    printf("C is : %d and power is : %d\n",c,por);
    printf("first digit is %d\nLast digit is %d",a/por,a%10);
  
}

//                                                                                    3rd answer

#include<stdio.h>

int count(int a){
    int cnt = 0;
    if(a < 0 ){
        a = -a;
    }else if(a == 0){
        cnt = 1;
    }
    while(a > 0){
       cnt++;
       a = a/10;
    }
    return cnt;
};

float powx(int a , int b){
    int po = 1;
    if(b < 0 ){
        b = -b;
    }
    while(b > 0){
        po *= a;
        b--;
    }
    if(b < 0){
        return (1/po);
    }else{
        return (float)po;
    }
}
int main(){
    int a; scanf("%d",&a);
    int min, max;
    int c = count(a);
    if(c == 1){
        puts("This is one digit number");
        return 0;
    }else{
        if(a < 0) a = -a;
        min = a%10;
        max = a%10;
        while( a > 0){
            if(min > a%10) min = a%10;
            if(max < a%10) max = a%10;
            a /= 10;
        }
    }
    printf("min : %d\nmax : %d",min,max);
}


//                                                                                    4nd answer

