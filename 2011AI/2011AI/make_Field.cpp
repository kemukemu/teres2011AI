#include"include.h"

void make_Field() {
	printf("hello make_Field()\n");

	for(int i=0;i<CARD_MARK;i++) {
		for(int j=0;j<CARD_NUM_MAX;j++) {
			//三次元配列ってわかりにくいよね＾＾
			//現実世界もね＾＾
			Field[i][j][0] = 0;
			Field[i][j][1] = 0;
			printf(" %d ",Field[i][j][0]);
		}
		printf("\n");
	}
}