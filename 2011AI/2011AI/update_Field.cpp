#include"include.h"

void update_Field(int return_start_Ai)
{  
	//order_Aiも引数にとり、誰が出したかも追加する

	printf("update_Field() start!\n");

	for(int i=0;i<CARD_MARK;i++)
	{

		for(int j=0;j<CARD_NUM_MAX;j++)
		{
			if(return_start_Ai==((CARD_NUM_MAX*i)+ j + 1))	//ここを修正(+ j + 1)
			{
				Field[i][j][0]=1;
			}
		}
	}



	for(int i=0;i<CARD_MARK;i++) {
		for(int j=0;j<CARD_NUM_MAX;j++) {
			printf(" %d ",Field[i][j][0]);
		}
		printf("\n");
	}
}