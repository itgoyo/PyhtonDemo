#include<iostream>
#include<cmath>
#include <stdlib.h>

using namespace std;

int main(void){


    //题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

        //1.程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去掉不满足条件的排列。
    /*int i,j,k,n;
    printf("\n");
    for(i=1;i<5;i++)
        for(j=1;j <5;j ++)
            for(k =1;k  <5;k  ++)
            {
                if(i!=k&&1!=j&&j!=k)
                    printf("%d,%d,%d \n",i,j,k);
                n=n+1;
            }
    printf("n=%d",n);*/


/*    题目：输入三个整数x,y,z，请把这三个数由小到大输出。*/
        //1.程序分析：我们想办法把最小的数放到x上，先将x与y进行比较，如果x>y则将x与y的值进行交换，
        //　　　　　　然后再用x与z进行比较，如果x>z则将x与z的值进行交换，这样能使x最小。


int x,y,z,t;
scanf("%d %d %d",&x,&y,&z);
if(x>y){
    t=x;x=y;y=t;
}


if(y>z){
    t=y;y=z;z=t;
}
if(z>x)
{
    t=z;z=x;x=t;
}
printf("从小到大的顺序为：%d %d %d \n ",z,y,x);



    return 0;

}
