#include<stdio.h>
int main()
{
   int itemcode=0,itemquantity,k,price,sum=0,n,l,a;
   printf("number of item:");
   scanf("%d",&n);
  
    for(k=0;k<n;k++) // iterating over number of varieties in order
   {
           printf("enter the item code:");
           scanf("%d",&itemcode);
   
           printf("enter the quantity:");
           scanf("%d",&itemquantity);
   
         switch(itemcode) // check the item to be ordered
       {
          case 1:
          price=10;
           printf("idly %d * %d",itemquantity,price);
          break;
            
          case 2:
          price=40;
          printf("dosa %d * %d",itemquantity,price);
          break;
          
           case 3:
           price=30;
          printf("pongal %d * %d",itemquantity,price);
          break;
          
           case 4:
           price=20;
          printf("chapaathi %d * %d",itemquantity,price);
          break;
          
           case 5:
           price=150;
          printf("veg biriyaani %d * %d",itemquantity,price);
          break;
          
           case 6:
           price=15;
          printf("tea %d * %d",itemquantity,price);
          break;
          
           case 7:
           price=20;
          printf("coffee %d * %d",itemquantity,price);
          break;
          
           case 8:
           price=12;
          printf("vada %d * %d",itemquantity,price);
          break;
           
           default:
          printf("enter a valid code");
        }
             l=itemquantity*price;
             printf(" = %d\n",l); 
         
          for(a=0;a<l;a=a+l)
                {   
                   sum=sum+l;
                 }
     }
             printf("total bill to be paid: %d\n",sum);
  
    return 0;
  }
