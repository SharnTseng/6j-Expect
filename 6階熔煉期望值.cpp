#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
	srand(time(NULL));
	int a,g,d,tg,td,r=0;
	printf("Number of 6j? : ");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
    	g=3;
    	d=1;
        while(1){
            r=rand() % 100 + 1;
            if (r<=20){
            	break;
			}
			else if(r<=40){
				d+=1;
			}
			else if(r<=70){
				g+=1;
				d+=1;
			}
			else if(r<=90){
				g+=2;
				d+=1;
			}
			else if(r<=100){
				g+=3;
				d+=1;
			}
        }
        tg+=g;
        td+=d;
    }
	printf("Total 5j cost: %d  Total Dwarf cost: %d\n",tg,td);
	printf("Average 5j: %.2f  Average Dwarf: %.2f\n",float(tg)/a,float(td)/a);
	printf("Average $ cost: %.2f w\n",(float(tg)/a+float(td)/a)*100 );
    return 0;
}
