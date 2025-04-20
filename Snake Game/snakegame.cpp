#include <iostream>
#include <windows.h>
#include <graphics.h>
#include <time.h>
#include <mmsystem.h>

using namespace std;

int main()
{
    initwindow(640, 480);
    setfillstyle(1,1);
    for(int i = 0; i < 200; i++)
    {
    	setcolor(10);
		settextstyle(10, 0, 5);
		outtextxy(160, i-100, "The Snake Game");
		settextstyle(10, 0, 4);
		outtextxy(230, 480-i-50, "Created by");
		setcolor(15);
		settextstyle(10, 0, 3);
		outtextxy(130, 480-i+100, "Israr Ahmad");
		setcolor(10);
	    delay(10);
	}
    delay(3000);
	
	while(1)
{
    int dc=1;	
	int length = 5;
	int x[30];
	int y[30];
	int d;
	int dir = 1;
	int Foodx = 300;
	int Foody = 300;
	int loop = 1;
	char Score[3];
	int score;
	int start = 0;
	int choice = 1;
	int difficulty;
	int display = 1;
	
	srand(time(0));
    
    while(start != 1)
    {    
		if(display == 1)
		{
			setfillstyle(1,0);
    		bar(0,0,640,480);
    	
    		setcolor(10);
			settextstyle(10, 0, 6);
			outtextxy(120, 80, "The Snake Game");
    	
    		setcolor(15);
    		settextstyle(10, 0, 5);
    		outtextxy(250, 200, "Start");
    		rectangle(240, 190, 385, 250);
    	
    		outtextxy(180, 300, "How to Play?");
    		rectangle(170, 290, 485, 350);
    	
    		outtextxy(265, 400, "Exit");
    		rectangle(255, 390, 370, 450);
    		
    		display = 0;	
		}
		
    	if(choice == 1)
    	{
    		line(200, 200, 220, 220);
    		line(200, 240, 220, 220);
    		line(200, 200, 200, 240);
		}
    	else if(choice == 2)
    	{
    		line(130, 300, 150, 320);
    		line(130, 340, 150, 320);
    		line(130, 300, 130, 340);
		}
		else if(choice == 3)
    	{
    		line(215, 400, 235, 420);
    		line(215, 440, 235, 420);
    		line(215, 400, 215, 440);
		}
    	
    	if(GetAsyncKeyState(VK_UP))
		{
			if(choice == 2)
			{
				choice = 1;
			}
			else if(choice == 3)
			{
				choice = 2;
			}
			display = 1;
		}
    	else if(GetAsyncKeyState(VK_DOWN))
		{
			if(choice == 1)
			{
				choice = 2;
			}
			else if(choice == 2)
			{
				choice = 3;
			}
			display = 1;
		}
    	else if(GetAsyncKeyState(VK_RETURN))
		{
			delay(100);
			
			if(choice == 1)
			{
				start = 1;
			}
			else if(choice == 2) 
			{
				delay(100);
				setfillstyle(1,0);
    			bar(0,0,640,480);
    			setcolor(10);
    			settextstyle(10, 0, 5);
    			outtextxy(170, 100, "How to Play?");
    			setcolor(15);
    			settextstyle(10, 0, 1);
    			outtextxy(30, 200, "1: First choose the difficulty level you want to play.");
    			outtextxy(30, 230, "2: Use arrow keys for snake movement.");
    			outtextxy(30, 260, "3: Avoid touching the edges and the obstacles.");
    			outtextxy(30, 290, "4: If your score is 20, you win.");
    			outtextxy(30, 320, "5: Good luck.");
    			setcolor(10);
    			settextstyle(10, 0, 3);
    			outtextxy(170, 400, "Press space to return");
    				
    			while(choice == 2)
    			{
    				if(GetAsyncKeyState(VK_SPACE))
    				{
    					choice = 1;
					}
					else if(GetAsyncKeyState(VK_RETURN))
					{
						
					}
					delay(100);
				}
				display = 1;
			}
			else if(choice == 3)
			{
				return 0;
			}
		}
    	
    	delay(100);
	}
	
	display = 1;
	while(start != 2)
	{
		if(display == 1)
		{
			setfillstyle(1,0);
    		bar(0,0,640,480);
    	
    		setcolor(15);
    		settextstyle(10, 0, 5);
    		outtextxy(100, 100, "Choose Difficulty");
    	
    		outtextxy(250, 200, "Easy");
    		rectangle(240, 190, 360, 250);
    	
    		outtextxy(230, 290, "Medium");
    		rectangle(220, 280, 390, 340);
    	
    		outtextxy(250, 380, "Hard");
    		rectangle(240, 370, 360, 430);
    		
    		display = 0;
		}
		
    	
    	if(choice == 1)
    	{
    		line(200, 200, 220, 220);
    		line(200, 240, 220, 220);
    		line(200, 200, 200, 240);
		}
    	else if(choice == 2)
    	{
    		line(180, 290, 200, 310);
    		line(180, 330, 200, 310);
    		line(180, 290, 180, 330);
		}
		else if(choice == 3)
    	{
    		line(200, 380, 220, 400);
    		line(200, 420, 220, 400);
    		line(200, 380, 200, 420);
		}
    	
    	if(GetAsyncKeyState(VK_UP))
		{
			if(choice == 2)
			{
				choice = 1;
			}
			else if(choice == 3)
			{
				choice = 2;
			}
			display = 1;
		}
    	else if(GetAsyncKeyState(VK_DOWN))
		{
			if(choice == 1)
			{
				choice = 2;
			}
			else if(choice == 2)
			{
				choice = 3;
			}
			display = 1;
		}
		else if(GetAsyncKeyState(VK_RETURN))
		{
			difficulty = choice;
			start = 2;
		}
		
    	delay(100);
	}
    delay(500);
    
	for(int i = 0;i < 30 ; i++)
	{
        x[i] = -20;
        y[i] = -20;
    }
    
    x[0] = 100;
    y[0] = 100;


    setfillstyle(1,9);
    bar(0,0,640,60);
    bar(0,0,10,480);
    bar(0,480,640,470);
    bar(630,10,640,480);
    
    setfillstyle(1,15);
	bar(10,60,630,470);
	
	setcolor(15);
	settextstyle(10, 0, 2);
	setbkcolor(9);
	outtextxy(10, 35, "Score: ");
	
	settextstyle(10, 0, 3);
	outtextxy(240, 10, "Snake Game");
	
	score = 0;
	Score[0] = '0';
	Score[1] = '0';
	Score[2] = '\0';
		
	if(difficulty >= 2)
    {
		setfillstyle(1,9);
		bar(200,200,440,300);
	}
	if(difficulty >= 3)
    {
    	setfillstyle(1,9);
    	bar(60,120,100,400);
		bar(580,120,540,400);
	}
	int fc = 1+(rand()%8);
	
	
    while(start != 0)
    {
    	setcolor(15);
		settextstyle(10, 0, 2);
		setbkcolor(9);
		outtextxy(90, 35, Score);
    	if(score >= 20)
		{
    		start = 0;
    		break;
    	}
    	if(x[0]==Foodx && y[0]==Foody)
    	{
    		length += 1;
    		dc=fc;
    		score = length - 5 ;
			Score[0] = char(48 + score / 10);
			Score[1] = char(48 + score % 10);
			Score[2] = '\0';
    		PlaySound(TEXT("eat.wav"),NULL,0); 
    		Foodx = (rand() % 560) + 60;
    		while(Foodx % 20 != 0)
    		{
    			Foodx--;
			}
    		Foody = (rand() % 360) + 100;
    		while(Foody % 20)
    		{
    			Foody--;
    			
    			fc = 1+(rand()%8);
			}
    		
		}
    	
    	setfillstyle(1,12);
    	setcolor(fc);
    	circle(Foodx + 10, Foody + 10, 10);
    	setfillstyle(SOLID_FILL, fc);
    	floodfill(Foodx+10,Foody+10,fc);
    	
    	if(GetAsyncKeyState(VK_RIGHT)){d=1;}
    	else if(GetAsyncKeyState(VK_LEFT)){ d=2;}
    	else if(GetAsyncKeyState(VK_UP)){ d=3;}
    	else if(GetAsyncKeyState(VK_DOWN)) {d=4;}
    	else{d=0;}
    	
    	switch(d)
		{
	    	case 0:
				if(dir==1){x[0]=x[0]+20;}
	    		else if(dir==2){x[0]=x[0]-20;}
	    		else if(dir==3){ y[0]=y[0]-20;}
	    		else if(dir==4) {y[0]=y[0]+20;}
	    		else{d=0;}
				break;
	    	case 1:
	    		x[0]=x[0]+20;
	    		dir=1;
	        	break;
	    	case 2:
	    		x[0]= x[0]-20;
	        	dir=2;
	        	break;
	    	case 3:
	        	dir=3;
	        	y[0]=y[0]-20;
	        	break;
	    	case 4:
	        	dir=4;
	    		y[0]= y[0]+20;
	        	break;
	    }
    	
    	for(int i = 0; i < length; i++)
		{
			if(i == 0)
			{
				setfillstyle(1,0);
			}
			else
			{
				setfillstyle(1,dc);
				
					
			}
        	bar(x[i], y[i], x[i]+20, y[i]+20);
        	
        	if(i > 0)
        	{
        		if(x[i] == x[0] && y[i] == y[0])
        		{
        			start = 0;
				}
			}
    	}
    	if(GetAsyncKeyState(VK_SPACE))
    	{
			while(1)
			if(GetAsyncKeyState(VK_RETURN))
			break;
		}
    	for(int i= length; i > 0; i--) 
		{
    		x[i] = x[i-1];
    	    y[i] = y[i-1];
    	}
    	
    	int j = 0;
    	while(x[j] != -20)
    	{
    		j++;
		}
		j--;
		int k = 0;
    	while(y[k] != -20)
    	{
    		k++;
		}
		k--;
		
		setfillstyle(1,15);
		bar(x[j], y[k], x[j]+20, y[k]+20);
		
    	if(x[0] >= 620 || x[0]<=0|| y[0]<=60 || y[0]>=460)
		{
    		start = 0;
    		break;
    	}
    	
    	if(difficulty >= 2)
    	{
    		if(x[0] >= 200 && x[0]<440 && y[0]<300 && y[0]>=200)
			{
    			start = 0;
    			break;
   			}
    		if(Foodx >= 200 && Foodx<440 && Foody<300 && Foody>=200)
			{
    			Foodx = 180;
				Foody = 180;
   			}
		}
		
		if(difficulty >= 3)
    	{
    		if(x[0] >= 60 && x[0]<100 && y[0]<400 && y[0]>=120)
			{
    			start = 0;
    			break;
   			}
    		if(Foodx >= 60 && Foodx<100 && Foody<400 && Foody>=120)
			{
    			Foodx = 40;
				Foody = 100;
   			}
   			
    		if(x[0] >= 540 && x[0]<580 && y[0]<400 && y[0]>=120)
			{
    			start = 0;
    			break;
   			}
    		if(Foodx >= 540 && Foodx<580 && Foody<400 && Foody>=120)
			{
    			Foodx = 520;
				Foody = 100;
   			}
		}
    	
    	delay(150);
	}
	
	setfillstyle(1,9);
	if(difficulty >= 2)
	{
    	bar(200,200,440,300);
	}
	if(difficulty >= 3)
	{
    	bar(60,120,100,400);
    	bar(580,120,540,400);
	}
	delay(1000);
	
	setfillstyle(1,0);
    bar(0,0,640,480);
    setcolor(15);
	settextstyle(10, 0, 7);
	setbkcolor(0);
	
	if(score >= 20)
	{
		settextstyle(10, 0, 5);
		outtextxy(180, 200, "You Win");
		settextstyle(10, 0, 4);
		outtextxy(180, 240, "Your Score:");
		outtextxy(455,240,Score);
		PlaySound(TEXT("win.wav"),NULL,SND_SYNC);
	}
	else
	{
		settextstyle(10, 0, 5);
		outtextxy(170, 200, "You Lose");
		settextstyle(10, 0, 4);
		outtextxy(170, 260, "Your Score:");
		outtextxy(380,260,Score);
		PlaySound(TEXT("lose.wav"),NULL,SND_SYNC);
	}
	
	delay(3000);
}
    getch();
    return 0;
}

