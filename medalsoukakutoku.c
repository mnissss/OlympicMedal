#include <stdio.h>

int check_sum_medal(int ag, int as, int ab, int bg, int bs, int bb){

	int a_total;
	int b_total;
	int Nchange;

	a_total = ag + as + ab;
	b_total = bg + bs + bb;
	
	//aの国が大きい場合0を返す
	if (a_total > b_total){
		Nchange = 0;
	}
	else{
		Nchange = 1;
	}
	return Nchange;
}
