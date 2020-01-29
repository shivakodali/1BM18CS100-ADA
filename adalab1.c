#include<stdio.h>
 void main()
  {
	int n,l,key,i,j;
	int array[10],result[10];
	printf("enter number of test cases\n");
	scanf("%d",&n);
	for(j=0;j<n;j++)
		{
			printf("Enter size of array %d\n",(j+1));
			scanf("%d",&l);
			printf(" Enter the element to be found\n");
			scanf("%d",&key);
			printf("Enter the elements\n");
		for(i=0;i<l;i++)
	{
		scanf("%d",&array[i]);
	}
		for(i=0;i<l;i++)
   {
		if(array[i]==key)
   {
		result[j]=1;
		break;
      }
      }
		if(i==l)
		result[j]=-1;
} 
		printf("output\n");
		for(i=0;i<n;i++)
		printf("%d\n",result[i]);
}

