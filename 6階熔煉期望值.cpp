#include <time.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
	srand(time(NULL));
	int a,g,d,tg,td,r=0,t,tt;
	printf("幾顆6階?(熔煉直到成功) : ");
    scanf("%d",&a);
    for(int i=0;i<a;i++){
    	g=3; //初始條件 三顆5j 一張卷 嘗試0次
    	d=1;
	t=0;
        while(1){
        	r=rand() % 100 + 1;//1~100 取隨機
		t++;
        	if (r<=20){ //20%成功
            		break;
		}
		else if(r<=40){ //20%原封不動 耗一張卷
			d+=1;
		}
		else if(r<=70){ //30%耗一顆一張
			g+=1;
			d+=1;
		}
		else if(r<=90){ //20%耗兩顆一張
			g+=2;
			d+=1;
		}
		else if(r<=100){ //10%耗三顆一張
			g+=3;
			d+=1;
		}
        }
        tg+=g; //將結果加到總和
        td+=d;
	tt+=t;
    }
	printf("共嘗試融煉了: %d 次\n",tt);
	printf("總消耗5階量: %d 顆   總消耗卷: %d 張\n",tg,td);
	printf("平均消耗5階量: %.2f 顆  平均消耗卷量: %.2f 張\n",float(tg)/a,float(td)/a);
	printf("平均熔煉一顆要消耗 %.2f 萬\n",(float(tg)/a+float(td)/a)*100 );
    return 0;
}
