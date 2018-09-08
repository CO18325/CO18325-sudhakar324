#include<stdio.h>
int main()
{
 int opt;
int second;
int money=0;
int life=0;
int wrong=0;
printf("\t\tWELCOME TO GAME\n\n");
printf("Q-1)WHO IS THE PRIME MINISTER OF INDIA\n");
printf("1)VIJAY MALLYA\t 2)NARENDRA MODI\n 3)AMRENDRA BAHUBALI \t 4)SHAH RUKH KHAN\n");
printf("PLEASE INPUT THE OPTION NUMBER\n");
printf("PRESS 5 TO USE 50-50 LIFELINE");
scanf("%d",&opt);
switch(opt)
{
case 2:
	printf("Correct Answer!!!\n");
	money=100;
	break;
case 1:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
case 3:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
case 4:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
case 5:
	life++;
	printf("\n1)VIJAY MALLYA\t 2)NARENDRA MODI\n");
	scanf("%d",&second);
	if(second==2)
	{
	  printf("\nRight Answer\n");
	  money=100;
	  life++;
	}
	else
	{
	 printf("\nWrong Answer\n");
	 printf("\nGame Over\n");
	 wrong++;
	}
	break;
}

if(wrong==0)
 {
  printf("Q-2)\nWHO IS THE PRESIDENT OF INDIA?\n");
 printf("1)RAMNATH KOVIND\t 2)NARENDRA MODI\n 3)AMIT SHAH \t 4)LALU PRASAD YADAV\n");
  printf("PLEASE INPUT THE OPTION NUMBER\n");
  printf("PRESS 5 TO USE 50-50 LIFELINE\n");
  scanf("%d",&opt);
   switch(opt)
    {
    case 1:
	printf("Correct Answer!!!\n");
	money=1000;
	break;
    case 2:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
    case 3:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
    case 4:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
    case 5:
	 if(life==0)
       {
	    life++;
	    printf("\n1)RAMNATH KOVIND\t3)AMIT SHAH\n");
	    scanf("%d",&second);
	    if(second==1)
	     {
	      printf("\n Correct Answer\n");
	      money=1000;
          life++;
	     }
	    else
	     {
	      printf("Wrong Answer!!\n");
	      wrong++;
	     }
       }
  	 else
       {
	    printf("\nYour lifeline is already exhausted. \nPlease input your answer from the above four options\n");
	    scanf("%d",&opt);
    	if(opt==1)
         {
          printf("\nCorrect Answer!!\n");
	      money=1000;
         }
	else
	{
	printf("\nWrong Answer\n");
	wrong++;
       }
     }
    break;
    }
    if(wrong==0)
 {
  printf("Q-3)WHO IS THE CHIEF MINISTER OF PUNJAB?\n");
     printf("1)NAVJOT SINGH SIDHU\t 2)PRAKASH SINGH BADAL\n 3)CAPT AMRINDER SINGH \t 4)INDERPREET SINGH\n");
  printf("PLEASE INPUT THE OPTION NUMBER\n");
  printf("\nPRESS 5 TO USE 50-50 LIFELINE\n");
  scanf("%d",&opt);
   switch(opt)
    {
       case 3:
	printf("Correct Answer!!!\n");
	money=2000;
	break;
       case 2:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 1:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 4:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 5:
	if(life==0)
       {
	life++;
	printf("\n2)PRAKASH SINGH BADAL\t 3)CAPT AMRINDER SINGH\n");
	scanf("%d",&second);
	if(second==3)
	{
	  printf("Correct Answer!!\n");
	  money=2000;
	  life++;
	}
	else
	{
	 printf("Wrong Answer!!!\n");
	 wrong++;
	}
       }
  	else
       {
	printf("\n Your lifeline is already exhausted. \nPlease input your answer from the above four options\n");
	scanf("%d",&opt);

	if(opt==3)
    {
    printf("\nCorrect Answer!!\n");
	money=2000;
    }
	else
	{
	printf("\nWrong Answer\n");
	wrong++;
    }
   }
    break;
  }
 if(wrong==0)
 {
  printf("Q-4)WHO IS THE CEO OF GOOGLE?\n");
  printf("1)JETHALAL\t 2)SUNDAR PICHIE\n 3)TOM CRUISE\t 4)TOM HOLLAND\n");
  printf("PLEASE INPUT THE OPTION NUMBER\n");
  printf("\nPRESS 5 TO USE 50-50 LIFELINE\n");
  scanf("%d",&opt);
   switch(opt)
    {
       case 2:
	printf("Correct Answer!!!\n");
	money=5000;
	break;
       case 1:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 3:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 4:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 5:
	if(life==0)
       {
	life++;
	printf("\n2)SUNDAR PICHIE\t 3)TOM CRUISE\n");
	scanf("%d",&second);
	if(second==2)
	{
	  printf("Correct Answer!!\n");
	  life++;
	  money=5000;
	}
	else
	{
	 printf("Wrong Answer!!!\n");
	 wrong++;
	}
   }
  	else
    {
	printf("\n Your lifeline is already exhausted. \nPlease input your answer from the above four options\n");
	scanf("%d",&opt);

	if(opt==2)
    {
    printf("\nCorrect Answer!!\n");
	money=5000;
       }
	else
	{
	printf("\nWrong Answer\n");
	wrong++;
       }
     }
    break;
    }
    if(wrong==0)
 {
  printf("Q-5)WHO IS THE LEAD ACTOR IN THOR MOVIE??\n");
  printf("1)TOM HOLLAND\t 2)CHRIS EVANS\n 3)TONY STARK\t 4)CHRIS HEMSFORTH\n");
  printf("PLEASE INPUT THE OPTION NUMBER\n");
  printf("\nPRESS 5 TO USE 50-50 LIFELINE\n");
  scanf("%d",&opt);
   switch(opt)
    {
       case 4:
	printf("Correct Answer!!!\n");
	money=10000;
	break;
       case 2:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 3:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 1:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 5:
	if(life==0)
       {
	life++;
	printf("\n3)TONY STARK\t 4)CHRIS HEMSFORTH\n");
	scanf("%d",&second);
	if(second==4)
	{
	  printf("Correct Answer!!\n");
	  money=10000;
	  life++;
	}
	else
	{
	 printf("Wrong Answer!!!\n");
	 wrong++;
	}
       }
  	else
       {
	printf("\n Your lifeline is already exhausted. \nPlease input your answer from the above four options\n");
	scanf("%d",&opt);

	if(opt==4)
    {
    printf("\nCorrect Answer!!\n");
	money=10000;
       }
	else
	{
	printf("\nWrong Answer\n");
	wrong++;
       }
     }
    break;
    }
if(wrong==0)
 {
  printf("Q-6)WHO IS THE CHIEF MINISTER OF DELHI \n");
  printf("1)TARAK MEHTA\t 2)ARVIND KEJRIVAAL\n 3)NITISH KUMAR\t 4)AMIT SHAH\n");
  printf("PLEASE INPUT THE OPTION NUMBER\n");
  printf("\nPRESS 5 TO USE 50-50 LIFELINE\n");
  scanf("%d",&opt);
   switch(opt)
    {
       case 2:
	printf("Correct Answer!!!\n");
	money=15000;
	break;
       case 1:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 3:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 4:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 5:
	if(life==0)
       {
	life++;
	printf("\n1)TARAK MEHTA\t 2)ARVIND KEJRIVAAL\n");
	scanf("%d",&second);
	if(second==2)
	{
	  printf("Correct Answer!!\n");
	  money=15000;
	  life++;
	}
	else
	{
	 printf("Wrong Answer!!!\n");
	 wrong++;
	}
       }
  	else
       {
	printf("\n Your lifeline is already exhausted. \nPlease input your answer from the above four options\n");
	scanf("%d",&opt);

	if(opt==2)
    {
    printf("\nCorrect Answer!!\n");
	money=15000;
       }
	else
	{
	printf("\nWrong Answer\n");
	wrong++;
       }
     }
    break;
    }
if(wrong==0)
 {
  printf("Q-7)WHO IS THE PRIME MINISTER OF PAKISTAN ?\n");
  printf("1)SALMAN KHAN\t 2)IMRAN KHAN\n 3)SHOHIB MALIK\t 4)SHAHID AFRIDI\n");
  printf("PLEASE INPUT THE OPTION NUMBER\n");
  printf("\nPRESS 5 TO USE 50-50 LIFELINE\n");
  scanf("%d",&opt);
   switch(opt)
    {
       case 2:
	printf("Correct Answer!!!\n");
	money=25000;
	break;
       case 1:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 3:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 4:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 5:
	if(life==0)
       {
	life++;
	printf("\nSALMAN KHAN\t 2)IMRAN KHAN\n");
	scanf("%d",&second);
	if(second==2)
	{
	  printf("Correct Answer!!\n");
	  life++;
	  money=25000;
	}
	else
	{
	 printf("Wrong Answer!!!\n");
	 wrong++;
	}
       }
  	else
       {
	printf("\n Your lifeline is already exhausted. \nPlease input your answer from the above four options\n");
	scanf("%d",&opt);

	if(opt==2)
    {
    printf("\nCorrect Answer!!\n");
	money=25000;
       }
	else
	{
	printf("\nWrong Answer\n");
	wrong++;
       }
     }
    break;
    }
if(wrong==0)
 {
  printf("Q-8)WHO IS THE ACTOR WHO PLAYS THE ROLE OF CAPTAIN AMERICA?\n");
  printf("1)CHRIN EVANS\t 2)JACKIE CHAN\n 3)TOM CRUISE\t 4)VIN DIESEL\n");
  printf("PLEASE INPUT THE OPTION NUMBER\n");
  printf("\nPRESS 5 TO USE 50-50 LIFELINE\n");
  scanf("%d",&opt);
   switch(opt)
    {
       case 1:
	printf("Correct Answer!!!\n");
	money=30000;
	break;
       case 2:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 3:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 4:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 5:
	if(life==0)
       {
	life++;
	printf("\n1)CHRIN EVANS\t3)TOM CRUISE\n");
	scanf("%d",&second);
	if(second==1)
	{
	  printf("Correct Answer!!\n");
	  life++;
	  money=30000;
	}
	else
	{
	 printf("Wrong Answer!!!\n");
	 wrong++;
	}
       }
  	else
       {
	printf("\n Your lifeline is already exhausted. \nPlease input your answer from the above four options\n");
	scanf("%d",&opt);

	if(opt==1)
    {
    printf("\nCorrect Answer!!\n");
	money=30000;
       }
	else
	{
	printf("\nWrong Answer\n");
	wrong++;
       }
     }
    break;
    }
if(wrong==0)
 {
  printf("Q-9)WHO PLAYED NEERJA IN THE MOVIE NEERJA?\n");
  printf("1)RAKHI SAWANT\t 2)KATRINA KAIF\n 3)SCARLETT JOHANSON\t 4)SONAM KAPOOR\n");
  printf("PLEASE INPUT THE OPTION NUMBER\n");
  printf("\nPRESS 5 TO USE 50-50 LIFELINE\n");
  scanf("%d",&opt);
   switch(opt)
    {
       case 4:
	printf("Correct Answer!!!\n");
	money=35000;
	break;
       case 2:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 3:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 1:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 5:
	if(life==0)
       {
	life++;
	printf("\n3)SCARLETT JOHANSON\t 4)SONAM KAPOOR\n\n");
	scanf("%d",&second);
	if(second==4)
	{
	  printf("Correct Answer!!\n");
	  life++;
	  money=35000;
	}
	else
	{
	 printf("Wrong Answer!!!\n");
	 wrong++;
	}
       }
  	else
       {
	printf("\n Your lifeline is already exhausted. \nPlease input your answer from the above four options\n");
	scanf("%d",&opt);

	if(opt==4)
    {
    printf("\nCorrect Answer!!\n");
	money=35000;
       }
	else
	{
	printf("\nWrong Answer\n");
	wrong++;
       }
     }
    break;
    }

if(wrong==0)
 {
  printf("Q-10)WHO WON THE FIFA WORLD CUP 2018?\n");
  printf("1)FRANCE\t 2)U.S.A\n 3)ARGENTINA\t 4)INDIA\n");
  printf("PLEASE INPUT THE OPTION NUMBER\n");
  printf("\nPRESS 5 TO USE 50-50 LIFELINE\n");
  scanf("%d",&opt);
   switch(opt)
    {
       case 1:
	printf("Correct Answer!!!\n");
	money=45000;
	break;
       case 2:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 3:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 4:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 5:
	if(life==0)
       {
	life++;
	printf("\n1)FRANCE\t 2)U.S.A\n");
	scanf("%d",&second);
	if(second==1)
	{
	  printf("Correct Answer!!\n");
	  life++;
	  money=45000;
	}
	else
	{
	 printf("Wrong Answer!!!\n");
	 wrong++;
	}
       }
  	else
       {
	printf("\n Your lifeline is already exhausted. \nPlease input your answer from the above four options\n");
	scanf("%d",&opt);

	if(opt==1)
    {
    printf("\nCorrect Answer!!\n");
	money=45000;
       }
	else
	{
	printf("\nWrong Answer\n");
	wrong++;
       }
     }
    break;
    }
if(wrong==0)
 {
  printf("Q-11)WHO HAS MADE 100 CENTURIES IN INTERNANTIONAL CRICKET?\n");
  printf("1)RICKY PONTING\t 2)SACHIN TENDULKAR\n 3)VIRAT KOHLI\t 4)YUVRAJ SINGH\n");
  printf("PLEASE INPUT THE OPTION NUMBER\n");
  printf("\nPRESS 5 TO USE 50-50 LIFELINE\n");
  scanf("%d",&opt);
   switch(opt)
    {
       case 2:
	printf("Correct Answer!!!\n");
	money=55000;
	break;
       case 1:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 3:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 4:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 5:
	if(life==0)
       {
	life++;
	printf("\n2)SACHIN TENDULKAR\t 3)VIRAT KOHLI\n");
	scanf("%d",&second);
	if(second==2)
	{
	  printf("Correct Answer!!\n");
	  life++;
	  money=55000;
	}
	else
	{
	 printf("Wrong Answer!!!\n");
	 wrong++;
	}
       }
  	else
       {
	printf("\n Your lifeline is already exhausted. \nPlease input your answer from the above four options\n");
	scanf("%d",&opt);

	if(opt==2)
    {
    printf("\nCorrect Answer!!\n");
	money=55000;
       }
	else
	{
	printf("\nWrong Answer\n");
	wrong++;
       }
     }
    break;
    }
    if(wrong==0)
 {
  printf("Q-12)WHO ACTED AS NATASHA ROMANOFF IN IRON MAN 2\n");
  printf("1)AMELIA TROY\t 2)SCARLETT JOHANSON\n 3)GAL GADOT\t 4)EMMA WATSON\n");
  printf("PLEASE INPUT THE OPTION NUMBER\n");
  printf("\nPRESS 5 TO USE 50-50 LIFELINE\n");
  scanf("%d",&opt);
   switch(opt)
    {
       case 2:
	printf("Correct Answer!!!\n");
	money=65000;
	break;
       case 1:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 3:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 4:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 5:
	if(life==0)
       {
	life++;
	printf("\n1)AMELIA TROY\t 2)SCARLETT JOHANSON\n");
	scanf("%d",&second);
	if(second==2)
	{
	  printf("Correct Answer!!\n");
	  life++;
	  money=65000;
	}
	else
	{
	 printf("Wrong Answer!!!\n");
	 wrong++;
	}
       }
  	else
       {
	printf("\n Your lifeline is already exhausted. \nPlease input your answer from the above four options\n");
	scanf("%d",&opt);

	if(opt==2)
    {
    printf("\nCorrect Answer!!\n");
	money=65000;
       }
	else
	{
	printf("\nWrong Answer\n");
	wrong++;
       }
     }
    break;
    }
if(wrong==0)
 {
  printf("Q-13)WHO WAS THE LEAD ACTOR IN THE MOVIE RAMPAGE?\n");
  printf("1)CHRISTOPHER REEVE\t 2)VAN PERSIE\n 3)VIN DIESEL\t 4)DWAYNE JOHANSON\n");
  printf("PLEASE INPUT THE OPTION NUMBER\n");
  printf("\nPRESS 5 TO USE 50-50 LIFELINE\n");
  scanf("%d",&opt);
   switch(opt)
    {
       case 4:
	printf("Correct Answer!!!\n");
	money=75000;
	break;
       case 2:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 3:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 1:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 5:
	if(life==0)
       {
	life++;
	printf("\n3)VIN DIESEL\t 4)DWAYNE JOHANSON\n");
	scanf("%d",&second);
	if(second==4)
	{
	  printf("Correct Answer!!\n");
	  life++;
	  money=75000;
	}
	else
	{
	 printf("Wrong Answer!!!\n");
	 wrong++;
	}
       }
  	else
       {
	printf("\n Your lifeline is already exhausted. \nPlease input your answer from the above four options\n");
	scanf("%d",&opt);

	if(opt==4)
    {
    printf("\nCorrect Answer!!\n");
	money=75000;
       }
	else
	{
	printf("\nWrong Answer\n");
	wrong++;
       }
     }
    break;
    }
if(wrong==0)
 {
  printf("Q-14)WHO WAS THE DEPUTY CHIEF MINISTER OF  MAHARASHTRA IN 2012?\n");
  printf("1)ARUN JAITLEY \t 2)KIRON KHER\n 3)PRAKASH JAVEDEKAR\t 4)AJIT PAWAR\n");
  printf("PLEASE INPUT THE OPTION NUMBER\n");
  printf("\nPRESS 5 TO USE 50-50 LIFELINE\n");
  scanf("%d",&opt);
   switch(opt)
    {
       case 4:
	printf("Correct Answer!!!\n");
	money=85000;
	break;
       case 2:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 3:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 1:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 5:
	if(life==0)
       {
	life++;
	printf("\n3)PRAKASH JAVEDEKAR\t 4)AJIT PAWAR\n");
	scanf("%d",&second);
	if(second==4)
	{
	  printf("Correct Answer!!\n");
	  life++;
	  money=85000;
	}
	else
	{
	 printf("Wrong Answer!!!\n");
	 wrong++;
	}
       }
  	else
       {
	printf("\n Your lifeline is already exhausted. \nPlease input your answer from the above four options\n");
	scanf("%d",&opt);

	if(opt==4)
    {
    printf("\nCorrect Answer!!\n");
	money=85000;
       }
	else
	{
	printf("\nWrong Answer\n");
	wrong++;
       }
     }
    break;
    }
if(wrong==0)
 {
  printf("Q-14)AMONG WHOM DOES THE INDIAN CONSTITUTION PERMIT TO TAKE PART IN PROCEEDING OF PARLIMENT\n");
  printf("1)SOLICITER GENERAL \t 2)ATTORNEY GENERAL\n 3)CABINET SECRETORY\t 4)CHIEF JUSTICE\n");
  printf("PLEASE INPUT THE OPTION NUMBER\n");
  printf("\nPRESS 5 TO USE 50-50 LIFELINE\n");
  scanf("%d",&opt);
   switch(opt)
    {
       case 2:
	printf("Correct Answer!!!\n");
	money=100000;
	break;
       case 1:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 3:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 4:
	printf("Wrong Answer!!!\n");
	wrong++;
	break;
       case 5:
	if(life==0)
       {
	life++;
	printf("\n1)SOLICITER GENERAL \t 2)ATTORNEY GENERAL\n");
	scanf("%d",&second);
	if(second==2)
	{
	  printf("Correct Answer!!\n");
	  life++;
	  money=100000;
	}
	else
	{
	 printf("Wrong Answer!!!\n");
	 wrong++;
	}
       }
  	else
       {
	printf("\n Your lifeline is already exhausted. \nPlease input your answer from the above four options\n");
	scanf("%d",&opt);

	if(opt==2)
    {
    printf("\nCorrect Answer!!\n");
	money=100000;
       }
	else
	{
	printf("\nWrong Answer\n");
	wrong++;
       }
     }
    break;
    }


 }
}
}
}
}
}
}
 }
 }
 }
 }
}
}
}
if(money==100000)
	{
	printf("\t\t CONGRATULATIONS YOU HAVE ATTEMPTED ALL QUESTIONS RIGHT \n");
  	printf("\n\t\t YOUR FINAL amount IS %d \n",money);
	printf("\t\t YOU ARE THE NEW WINNER OF THIS GAME\n");
	printf("\t\tYOU ARE A LAKHPATI!!!!!!\n");
	}
    else
      {
	  	printf("\n YOUR FINAL AMOUNT IS %d \n",money);
      };
}


