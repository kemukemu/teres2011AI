
#include"include.h"
 
void shuffle_Card(void)
 {
	   
     int n[CARD_MARK*CARD_NUM_MAX-CARD_MARK];
	 
	 srand( (unsigned)time( NULL ) );
	 
	 int NUMcard = 1; 
     for(int s=0; s<CARD_MARK*CARD_NUM_MAX-CARD_MARK;s++)
	  {
	    
		n[s]=NUMcard;
		NUMcard++;
	       
		
		   for(int i=0;i<CARD_NUM;i++)
		    { for(int j=0;j<CARD_NUM_MAX;j++)
		     {
			  if(Field[i][j][0] == 1)
			  {
				  NUMcard++;
			  } 
		     } 
		    }
		
      }
	 
	 
	 int ran=CARD_MARK*CARD_NUM_MAX-CARD_MARK;
	 int temp;
	 
	 for(int j=CARD_MARK*CARD_NUM_MAX-CARD_MARK; j>0;j--)
	 {
	 int p=j-1;
	 int t=rand()%ran;
	     temp = n[p];
	     n[p]= n[t];
		 n[t]=temp;
		 ran=ran-1;
	 }
	 
	 for(int j=0; j<CARD_MARK*CARD_NUM_MAX-CARD_MARK;j++)
	  {
	 shuffle_Card_result[j]=n[j];
	 }	
 }



 
