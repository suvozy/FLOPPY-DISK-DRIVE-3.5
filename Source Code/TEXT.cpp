#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<dos.h>
void main()
{clrscr();
char x[78],c,y[42][78];
cout<<"TexT  ";cin.getline(x,79);
cout<<"\n";
int a=strlen(x),m=0,n=0;
for(m=0;m<42;m++)
{for(n=0;n<78;n++)   y[m][n]=' ';}  m=0;n=0;
for(int b=0;b<a;b++)
{c=x[b];
 if( (b)%13 ==0   && b>0)  {n=0;m+=7;}   //b%(no. of chars.in a line)
 switch(c)
  {  /* case '':y[m][n]=   y[m][n+1]=   y[m][n+2]=   y[m][n+3]=   y[m][n+4]='*';
	       y[m+1][n]= y[m+1][n+1]= y[m+1][n+2]= y[m+1][n+3]= y[m+1][n+4]='*';
	       y[m+2][n]= y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= y[m+2][n+4]='*';
	       y[m+3][n]= y[m+3][n+1]= y[m+3][n+2]= y[m+3][n+3]= y[m+3][n+4]='*';
	       y[m+4][n]= y[m+4][n+1]= y[m+4][n+2]= y[m+4][n+3]= y[m+4][n+4]='*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;*/

      case '1':y[m][n]=   y[m][n+1]=   y[m][n+2]=   '*';
				       y[m+1][n+2]= '*';
				       y[m+2][n+2]= '*';
				       y[m+3][n+2]=              y[m+3][n+4]='*';
				       y[m+4][n+2]=              y[m+4][n+4]='*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case '2':y[m][n]=   y[m][n+1]=   y[m][n+2]=   y[m][n+3]=   y[m][n+4]='*';
								 y[m+1][n+4]='*';
	       y[m+2][n]= y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= y[m+2][n+4]='*';
	       y[m+3][n]= '*';
	       y[m+4][n]= '*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case '3':y[m][n]=   y[m][n+1]=   y[m][n+2]=   y[m][n+3]=   y[m][n+4]='*';
								 y[m+1][n+4]='*';
	       y[m+2][n]= y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= y[m+2][n+4]='*';
								 y[m+3][n+4]='*';
								 y[m+4][n+4]='*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case '4':y[m][n]=                             y[m][n+3]=   '*';
	       y[m+1][n]=                           y[m+1][n+3]= '*';
	       y[m+2][n]=                           y[m+2][n+3]= '*';
	       y[m+3][n]=                           y[m+3][n+3]= '*';
	       y[m+4][n]= y[m+4][n+1]= y[m+4][n+2]= y[m+4][n+3]= y[m+4][n+4]='*';
						    y[m+5][n+3]= '*';break ;

      case '5':y[m][n]=   y[m][n+1]=   y[m][n+2]=   y[m][n+3]=   y[m][n+4]='*';
	       y[m+1][n]= '*';
	       y[m+2][n]= y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= y[m+2][n+4]='*';
								 y[m+3][n+4]='*';
								 y[m+4][n+4]='*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case '6':y[m][n]=   y[m][n+1]=   '*';
	       y[m+1][n]= '*';
	       y[m+2][n]= y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= y[m+2][n+4]='*';
	       y[m+3][n]=                                        y[m+3][n+4]='*';
	       y[m+4][n]=                                        y[m+4][n+4]='*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case '7':y[m][n]=   y[m][n+1]=   y[m][n+2]=   y[m][n+3]=   y[m][n+4]='*';
								 y[m+1][n+4]='*';
						    y[m+2][n+3]= '*';
				       y[m+3][n+2]= '*';
				       y[m+4][n+2]= '*';
				       y[m+5][n+2]= '*';break ;

      case '8':           y[m][n+1]=   y[m][n+2]=   y[m][n+3]=   '*';
			  y[m+1][n+1]=             y[m+1][n+3]= '*';
	       y[m+2][n]= y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= y[m+2][n+4]='*';
	       y[m+3][n]=                                        y[m+3][n+4]='*';
	       y[m+4][n]=                                        y[m+4][n+4]='*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case '9':y[m][n]=   y[m][n+1]=   y[m][n+2]=   y[m][n+3]=   y[m][n+4]='*';
	       y[m+1][n]=                                        y[m+1][n+4]='*';
	       y[m+2][n]=                                        y[m+2][n+4]='*';
	       y[m+3][n]= y[m+3][n+1]= y[m+3][n+2]= y[m+3][n+3]= y[m+3][n+4]='*';
								 y[m+4][n+4]='*';
						    y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case '0':y[m][n]=   y[m][n+1]=   y[m][n+2]=   y[m][n+3]=   y[m][n+4]='*';
	       y[m+1][n]=                           y[m+1][n+3]= y[m+1][n+4]='*';
	       y[m+2][n]=              y[m+2][n+2]=              y[m+2][n+4]='*';
	       y[m+3][n]= y[m+3][n+1]=                           y[m+3][n+4]='*';
	       y[m+4][n]=                                        y[m+4][n+4]='*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case 'a':			       y[m+1][n+2]= y[m+1][n+3]= y[m+1][n+4]='*';
								 y[m+2][n+4]='*';
	       y[m+3][n]= y[m+3][n+1]= y[m+3][n+2]= y[m+3][n+3]= y[m+3][n+4]='*';
	       y[m+4][n]=                                        y[m+4][n+4]='*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case 'b':y[m][n]=   '*';
	       y[m+1][n]= '*';
	       y[m+2][n]= y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= y[m+2][n+4]='*';
	       y[m+3][n]= 					 y[m+3][n+4]='*';
	       y[m+4][n]=                  			 y[m+4][n+4]='*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case 'c':            y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= y[m+2][n+4]='*';
	       y[m+3][n]= '*';
	       y[m+4][n]= '*';
			  y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case 'd':							 y[m][n+4]='*';
								 y[m+1][n+4]='*';
	       y[m+2][n]= y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= y[m+2][n+4]='*';
	       y[m+3][n]=                                        y[m+3][n+4]='*';
	       y[m+4][n]= 					 y[m+4][n+4]='*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case 'e':           y[m+1][n+1]= y[m+1][n+2]= y[m+1][n+3]= '*';
	       y[m+2][n]=                                        y[m+2][n+4]='*';
	       y[m+3][n]= y[m+3][n+1]= y[m+3][n+2]= y[m+3][n+3]= y[m+3][n+4]='*';
	       y[m+4][n]= '*';
			  y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case 'f':                        y[m][n+2]=   y[m][n+3]=   y[m][n+4]='*';
			  y[m+1][n+1]= '*';
	       y[m+2][n]= y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= y[m+2][n+4]='*';
			  y[m+3][n+1]= '*';
			  y[m+4][n+1]= '*';
			  y[m+5][n+1]= '*';break ;

      case 'g':	       	  y[m+1][n+1]= y[m+1][n+2]= y[m+1][n+3]= y[m+1][n+4]='*';
	       y[m+2][n]=                                        y[m+2][n+4]='*';
			  y[m+3][n+1]= y[m+3][n+2]= y[m+3][n+3]= y[m+3][n+4]='*';
								 y[m+4][n+4]='*';
			  y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= '*';break ;

      case 'h':y[m][n]=   '*';
	       y[m+1][n]= '*';
	       y[m+2][n]= y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= '*';
	       y[m+3][n]=                                       y[m+3][n+4]='*';
	       y[m+4][n]= 					y[m+4][n+4]='*';
	       y[m+5][n]= 					y[m+5][n+4]='*';break ;

      case 'i':                        y[m][n+2]=   '*';

	       y[m+2][n]= y[m+2][n+1]= y[m+2][n+2]=  '*';
				       y[m+3][n+2]= '*';
				       y[m+4][n+2]= '*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case 'j':							 y[m][n+4]='*';

						    y[m+2][n+3]= y[m+2][n+4]='*';
								 y[m+3][n+4]='*';
	       y[m+4][n]=                                        y[m+4][n+4]='*';
			  y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case 'k':y[m][n]=   				       	 y[m][n+4]='*';
	       y[m+1][n]= 			    y[m+1][n+3]= '*';
	       y[m+2][n]=               y[m+2][n+2]= '*';
	       y[m+3][n]= y[m+3][n+1]= '*';
	       y[m+4][n]=               y[m+4][n+2]= '*';
	       y[m+5][n]=                           y[m+5][n+3]= '*';break ;

      case 'l':y[m][n]=   y[m][n+1]=   y[m][n+2]=   '*';
				       y[m+1][n+2]= '*';
				       y[m+2][n+2]= '*';
				       y[m+3][n+2]= '*';
				       y[m+4][n+2]= '*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;

      case 'm':y[m+2][n]= y[m+2][n+1]= 		    y[m+2][n+3]= y[m+2][n+4]='*';
	       y[m+3][n]=              y[m+3][n+2]= 		 y[m+3][n+4]='*';
	       y[m+4][n]= 	       y[m+4][n+2]=		 y[m+4][n+4]='*';
	       y[m+5][n]= 	       y[m+5][n+2]=  		 y[m+5][n+4]='*';break ;

      case 'n':           y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= '*';
	       y[m+3][n]= 					y[m+3][n+4]='*';
	       y[m+4][n]= 					y[m+4][n+4]='*';
	       y[m+5][n]= 					y[m+5][n+4]='*';break ;

      case 'o': 	  y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= '*';
	       y[m+3][n]= 					 y[m+3][n+4]='*';
	       y[m+4][n]= 					 y[m+4][n+4]='*';
			  y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= '*';break ;

      case 'p':y[m+2][n]= y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= '*';
	       y[m+3][n]= 					 y[m+3][n+4]='*';
	       y[m+4][n]= y[m+4][n+1]= y[m+4][n+2]= y[m+4][n+3]= '*';
	       y[m+5][n]= '*';break ;

      case 'q':           y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= y[m+2][n+4]='*';
	       y[m+3][n]=  					 y[m+3][n+4]='*';
			  y[m+4][n+1]= y[m+4][n+2]= y[m+4][n+3]= y[m+4][n+4]='*';
								 y[m+5][n+4]='*';break ;

      case 'r':y[m+2][n]=              y[m+2][n+2]= y[m+2][n+3]= '*';
	       y[m+3][n]= y[m+3][n+1]= 				 y[m+3][n+4]='*';
	       y[m+4][n]= '*';
	       y[m+5][n]= '*';break ;

      case 's':y[m+1][n+1]= y[m+1][n+2]= y[m+1][n+3]= y[m+1][n+4]='*';
	       y[m+2][n]= '*';
	       y[m+3][n]= y[m+3][n+1]= y[m+3][n+2]= y[m+3][n+3]= y[m+3][n+4]='*';
								 y[m+4][n+4]='*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= '*';break ;

      case 't':           y[m][n+1]=   '*';
	       y[m+1][n]= y[m+1][n+1]= y[m+1][n+2]= y[m+1][n+3]= '*';
			  y[m+2][n+1]= '*';
			  y[m+3][n+1]= '*';
			  y[m+4][n+1]=                           y[m+4][n+4]='*';
			  y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= '*';break ;

      case 'u':y[m+2][n]= 			    y[m+2][n+3]= '*';
	       y[m+3][n]=                           y[m+3][n+3]= '*';
	       y[m+4][n]=                           y[m+4][n+3]= '*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]=              y[m+5][n+4]='*';break ;

      case 'v':y[m+2][n]= 			  		 y[m+2][n+4]='*';
	       y[m+3][n]= 				 	 y[m+3][n+4]='*';
			  y[m+4][n+1]= 		    y[m+4][n+3]= '*';
				       y[m+5][n+2]= '*';break ;

      case 'w':y[m+2][n]= 					 y[m+2][n+4]='*';
	       y[m+3][n]= 	       y[m+3][n+2]= 	         y[m+3][n+4]='*';
	       y[m+4][n]=              y[m+4][n+2]= 		 y[m+4][n+4]='*';
			  y[m+5][n+1]=             y[m+5][n+3]= '*';break ;

      case 'x':y[m+1][n]= 					 y[m+1][n+4]='*';
			  y[m+2][n+1]=              y[m+2][n+3]= '*';
				       y[m+3][n+2]= '*';
			  y[m+4][n+1]= 	            y[m+4][n+3]= '*';
	       y[m+5][n]= 					 y[m+5][n+4]='*';break ;

      case 'y':y[m+1][n]= 					 y[m+1][n+4]='*';
	       y[m+2][n]= 					 y[m+2][n+4]='*';
			  y[m+3][n+1]= y[m+3][n+2]= y[m+3][n+3]= y[m+3][n+4]='*';
						    y[m+4][n+3]= '*';
			  y[m+5][n+1]= y[m+5][n+2]= '*';break ;

      case 'z':y[m+2][n]= y[m+2][n+1]= y[m+2][n+2]= y[m+2][n+3]= '*';
				       y[m+3][n+2]= '*';
			  y[m+4][n+1]= '*';
	       y[m+5][n]= y[m+5][n+1]= y[m+5][n+2]= y[m+5][n+3]= y[m+5][n+4]='*';break ;
  }
 n+=6;
}
for(m=0;m<42;m++)
{for(n=0;n<78;n++)   cout<<y[m][n];cout<<"\n";delay(10*(n-m));}

cout<<"\n\n\t\t\t\tby          --THE  Shubhajit-- .";
getch();
}

























