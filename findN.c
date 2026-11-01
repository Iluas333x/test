#include <unistd.h>

int	main(int argc, char **argv)
{
    if (argc <= 1 ){
        return 0 ;
    }
     
    int   i = 0 ; 
int Nnum ;
	while (argv[1][i] != '\0'){
        if ( argv[1][i] == 'n'){
  Nnum++;
        }
        i++;
    }
    i = 0 ;
    if(Nnum > 0 ) {
    while (argv[1][i] != '\0'){
  write(1,&argv[1][i],1);
        i++;
    }
    }

}
