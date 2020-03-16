#include"WAEP.h"
int t;
void init(int T)
{
	t = T;
}

int janken(int P)
{
	if(P == 0) { // s -> p
		return 0;
	}
	else if(P == 2) { // r -> s
		return 2;
	}
	else if(P == 5) { // p -> r
		return 5;
	}
}