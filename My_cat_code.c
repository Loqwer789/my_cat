#include <stdio.h>
#include <string.h>
struct s_flags
{
char flag;
char *m_flags;

};	


void append_flags(char *flags, char flag)
{
	struct s_flags a_flags[3] = { {'b',"b"},{'n',"n"},{'s',"s"} };

	for( int i = 0; i < 3; i++)
		{
			if ( a_flags[i].flag == flag)
			{
				for (size_t j = 0; j < strlen(a_flags[i].m_flags);j++)
				{
			//append_flag(flags,a_flags[i].m_flags);
			
				}
			break;	
			}	
		}	
}
/*
void append_flag(char *flags, char flag)
{


if (strchr(flags, flag) == NULL)
	{
		char tmp[2] = "-";
		tmp[0] = flag;
		strcat(flags,tmp);
	}
}	
*/
void flag_parser( char *flags, int argc, char **argv, int *idx)
{
for ( int i = 1; i < argc ; i++ )
{
//	if (argv[i][0] != "-") 
	{
		break;
	}	
//	else 
	{
	*idx = i;
for (  size_t  j = 1;  j  < strlen(argv[i]) ; j++ )
		{
//			append_flags(flags, argv[i][j]); 	
		}	
	}	
}

}
typedef int bool;

int print_file(char *name,char *flags)
{
FILE *f = fopen(name,"rt");
if(f != NULL) 
{
	int  index = 0;
	bool printed = 0;
	int c = fgetc(f);
	
	while (c != EOF)
	{
	//	print_result(c, flags , index, printed); 	
//		putc(c, stdout);
		c = fgetc(f);
	
	}

fclose(f);
}	



}	

void print_result(int  c, char *flags, int *index, bool *printed)
{
//	if (!(strchr(flags, "s") != NULL ))
			      // 	&& *p == "\n" && c == "\n" && *printed)) 
	{
	//	if(*p == "\n" && c == "\n" ) *printed = 1 else *printed = 0;
	}	
	
	fputc(c,stdout);
//	*p = c;



}	

int main( int argc, char  **argv)
{	
char flags[10] = "\0" ;
int idx_end_flags = 1 ; 

flag_parser(flags, argc , argv, &idx_end_flags);

for (int i = 1; i < argc; i++)
	{
	print_file(argv[i], flags);
	}	


	return 0;
}	




