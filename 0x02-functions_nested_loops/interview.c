#include <stdlib.h>
#include <stdio.h>

int main (){



  int i, j, k, l ;


  for (i = 48 ; i < 59 ;i++ ) {
    for (j = 48 ; j < 59 ; j++) {
      for ( k = 48 ; k < 59 ; k++ ){
				     for ( l = 48 ; l < 59 ; l++ ){

           
				       puts(i);
                                       puts(j);
                                       puts(32);
                                       puts(k);
				       puts(l);
				       if ((i==58)&&(j==57)&&(k==58)&&(l==58))
					 break;
                                       puts(44);

     }
    }
}
}
  puts(10);


  return (0);
}
