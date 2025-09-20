/*write a program to determine the salvage value of an item when the purchase price,
years of service & the annual depreciation are given.
depreciation= (purchase price-salvage price)/years of service   */

#include<stdio.h>
#define purchase 100
#define years 7
#define depreciation 9.7
void main(){
float salvage;
salvage=(purchase)-(depreciation*years);
printf("\nThe purchase price of the item is:%d\n",purchase);
printf("The depreciation price of the item is:%.3f\n",depreciation);
printf("The years of service of the item is:%d\n",years);
printf("The salvage value of the item is:%.3f\n",salvage);

}

/*depreciation cost= the reduction in the value of an asset over time due to its use.
asset = a useful or valuable thing or person.
salvage price = the estimated worth/value of an asset after removing all depreciation cost(at the end of its useful life).*/
